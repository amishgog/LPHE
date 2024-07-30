###############################################################################
# (c) Copyright 2021 CERN for the benefit of the LHCb Collaboration           #
#                                                                             #
# This software is distributed under the terms of the GNU General Public      #
# Licence version 3 (GPL Version 3), copied verbatim in the file "COPYING".   #
#                                                                             #
# In applying this licence, CERN does not waive the privileges and immunities #
# granted to it by virtue of its status as an Intergovernmental Organization  #
# or submit itself to any jurisdiction.                                       #
###############################################################################
from __future__ import print_function

import os
import sys

## START OF CONFIG
# Read comments and check vars
# at least until end of config section

# List of input ROOT files with MC ntuples. Format:
#   (inputfile, outputfile, dataset)
files = [
    ("mc_2018_MD_Checked.root",
     "mc_2018_MD_PIDCorr.root", "MagDown_2018"),
    ("mc_2018_MU_Checked.root",
     "mc_2018_MU_PIDCorr.root", "MagUp_2018")
]

# Name of the input tree
# Could also include ROOT directory, e.g. "Dir/Ntuple"
input_tree = "DecayTree"

simversion = "run2"

# Postfixes of the Pt, Eta and Ntracks variables (ntuple variable name w/o branch name)
# e.g. if the ntuple contains "pion_PT", it should be just "PT"
ptvar = "PT"
etavar = "ETA"
pvar = None
## Could use P variable instead of eta
# etavar = None
# pvar   = "p"

ntrvar = "nTracks"  # This should correspond to the number of "Best tracks", not "Long tracks"!

# Dictionary of tracks with their PID variables, in the form {branch name}:{pidvars}
# For each track branch name, {pidvars} is a dictionary in the form {ntuple variable}:{pid config},
#   where
#     {ntuple variable} is the name of the corresponding ntuple PID variable without branch name,
#   and
#     {pid_config} is the string describing the PID configuration.
# Run PIDCorr.py without arguments to get the full list of PID configs
tracks = {
    'K': {
        "ProbNNk": "K_MC15TuneV1_ProbNNK_Brunel_Mod2",
        "ProbNNpi": "K_MC15TuneV1_ProbNNpi_Brunel",
        "ProbNNp": "K_MC15TuneV1_ProbNNp_Brunel",
    },
    'pi1': {
        "ProbNNk": "pi_MC15TuneV1_ProbNNK_Brunel",
        "ProbNNpi": "pi_MC15TuneV1_ProbNNpi_Brunel",
        "ProbNNp": "pi_MC15TuneV1_ProbNNp_Brunel",
    },
    'pi2': {
        "ProbNNk": "pi_MC15TuneV1_ProbNNK_Brunel",
        "ProbNNpi": "pi_MC15TuneV1_ProbNNpi_Brunel",
        "ProbNNp": "pi_MC15TuneV1_ProbNNp_Brunel",
    },
    'p': {
        "ProbNNk": "p_LbLcPi_MC15TuneV1_ProbNNK_Brunel",
        "ProbNNpi": "p_LbLcPi_MC15TuneV1_ProbNNpi_Brunel",
        "ProbNNp": "p_LbLcPi_MC15TuneV1_ProbNNp_Brunel",
    },
    'pbar': {
        "ProbNNk": "p_LbLcPi_MC15TuneV1_ProbNNK_Brunel",
        "ProbNNpi": "p_LbLcPi_MC15TuneV1_ProbNNpi_Brunel",
        "ProbNNp": "p_LbLcPi_MC15TuneV1_ProbNNp_Brunel",
    },
    'pi': {
        "ProbNNk": "pi_MC15TuneV1_ProbNNK_Brunel",
        "ProbNNpi": "pi_MC15TuneV1_ProbNNpi_Brunel",
        "ProbNNp": "pi_MC15TuneV1_ProbNNp_Brunel",
    }

}

# IF ON LXPLUS: if /tmp exists and is accessible, use for faster processing
# IF NOT: use /tmp if you have enough RAM
# temp_folder = '/tmp'
# ELSE: use current folder
temp_folder = '.'

## END OF CONFIG

import argparse

parser = argparse.ArgumentParser()
parser.add_argument(
    '--usefuncs',
    action='store_true',
    help=
    'Use the python interface functions rather than system calls to the PIDCorr.py script.'
)
args = parser.parse_args()

# Use system calls to the script
if not args.usefuncs:
    # make sure we don't overwrite local files and prefix them with random strings
    import string
    import random
    rand_string = ''.join(
        random.choice(string.ascii_uppercase + string.digits)
        for _ in range(10))

    temp_file_prefix = temp_folder + '/' + rand_string  # prefix temp files with folder and unique ID

    output_tree = input_tree.split("/")[-1]
    treename = input_tree

    for input_file, output_file, dataset in files:
        tmpinfile = input_file
        tmpoutfile = "%s_tmp1.root" % temp_file_prefix
        for track, subst in tracks.items():
            for var, config in subst.items():
                command = "python $PIDPERFSCRIPTSROOT/scripts/python/PIDGenUser/PIDCorr.py"
                command += " -m %s_%s" % (track, ptvar)
                if etavar:
                    command += " -e %s_%s" % (track, etavar)
                elif pvar:
                    command += " -q %s_%s" % (track, pvar)
                else:
                    print('Specify either ETA or P branch name per track')
                    sys.exit(1)
                command += " -n %s" % 1.1*ntrvar
                command += " -t %s" % treename
                command += " -p %s_%s_corr" % (track, var)
                command += " -s %s_%s" % (track, var)
                command += " -c %s" % config
                command += " -d %s" % dataset
                command += " -i %s" % tmpinfile
                command += " -o %s" % tmpoutfile
                command += " -S %s" % simversion
                command += " -a"

                treename = output_tree
                tmpinfile = tmpoutfile
                if 'tmp1' in tmpoutfile:
                    tmpoutfile = tmpoutfile.replace('tmp1', 'tmp2')
                else:
                    tmpoutfile = tmpoutfile.replace('tmp2', 'tmp1')

                print(command)
                retval = os.system(command)
                # if retval != 0:
                #     raise OSError('Call to {0} failed! ({1})'.format(
                #         command, retval))

        if "root://" in output_file:
            print("xrdcp %s %s" % (tmpinfile, output_file))
            os.system("xrdcp %s %s" % (tmpinfile, output_file))
        else:
            print("mv %s %s" % (tmpinfile, output_file))
            os.system("mv %s %s" % (tmpinfile, output_file))

# Use the python functions interface.
else:
    import ROOT
    from PIDPerfScripts.PIDCorr import run_pid_corr

    for input_file, output_file, dataset in files:
        fout = None
        outputtree = None
        for track, subst in tracks.items():
            for var, config in subst.items():
                # For the first pass, copy the whole tree and add the new branch
                # For following passes, just add branches to the existing tree
                kwargs = dict(
                    infilename=input_file,
                    intree=input_tree,
                    outfilename=output_file,
                    pidvar='{0}_{1}_corr'.format(track, var),
                    ptvar='{0}_{1}'.format(track, ptvar),
                    ntrvar=ntrvar,
                    oldpidvar='{0}_{1}'.format(track, var),
                    config=config,
                    dataset=dataset,
                    simversion=simversion,
                    addcalibstat=True,
                    outtree=outputtree)
                if etavar:
                    kwargs['etavar'] = '{0}_{1}'.format(track, etavar)
                elif pvar:
                    kwargs['pvar'] = '{0}_{1}'.format(track, pvar)
                else:
                    print('Specify either ETA or P branch name per track')
                    sys.exit(1)
                if outputtree:
                    kwargs['noclone'] = True
                run_pid_corr(**kwargs)
                # In the first pass, get the output TTree then add branches
                # to it in further passes.
                if outputtree is None:
                    fout = ROOT.TFile.Open(output_file, 'update')
                    outputtree = fout.Get(input_tree)
        fout.cd()
        outputtree.Write(outputtree.GetName(), ROOT.TObject.kWriteDelete)
        fout.Close()
