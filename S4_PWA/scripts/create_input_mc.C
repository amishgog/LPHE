#define create_input_cxx
#include "create_input.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>
#include "ROOT/RDataFrame.hxx"
#include "TChain.h"
#include <iostream>
#include <cmath>
#include "TString.h"
#include "TCut.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>
#include "TLorentzVector.h"

using namespace std;

void create_input_mc()
{
    // Opening the files required
    TChain *dt_chain = new TChain("DecayTree");
    dt_chain->Add("/panfs/gogia/LHCb/B2Dpppi/Analysis/S3_TMVA/root/mc_*_BDT.root");
    cout << "# of total entries: " << dt_chain->GetEntries() << endl;

    //Define the cuts
    TCut cut = "BDT > -0.03 && B0_PVDFit_M>5247.06 && B0_PVDFit_M<5312.91 && B0_PVFit_Dplus_M>1840 && B0_PVFit_Dplus_M<1900";

    // Create a new tree with cut 
    TTree *dis_chain = dt_chain->CopyTree(cut);
    cout << "# of entries after cut: " << dis_chain->GetEntries() << endl;

    // File to store the momenta
    ofstream outputFile1("../files/mc_momenta_SR.txt", ios::trunc);

    // File to store the charge
    ofstream outputFile2("../files/mc_charge_SR.txt", ios::trunc);

    //outputFile1.seekp(0, ios::end); // move to the end of the file

    Int_t N = dis_chain->GetEntries();

    create_input tag(dis_chain);

    // Print header
    outputFile1  << "-------------------------------------------------------------" << endl;
    outputFile1   << setw(5) << "E"
                << setw(15) << "PX" 
                << setw(15) << "PY" 
                << setw(15) << "PZ" << endl;

    for(Int_t ii=0; ii<N; ii++)
    {

        tag.GetEntry(ii);

        // For D
        TLorentzVector PVALLFit_vDplus_Kplus = TLorentzVector(tag.B0_PVALLFit_Dplus_Kplus_PX, tag.B0_PVALLFit_Dplus_Kplus_PY, tag.B0_PVALLFit_Dplus_Kplus_PZ, tag.B0_PVALLFit_Dplus_Kplus_PE);
        TLorentzVector PVALLFit_vDplus_piplus = TLorentzVector(tag.B0_PVALLFit_Dplus_piplus_PX, tag.B0_PVALLFit_Dplus_piplus_PY, tag.B0_PVALLFit_Dplus_piplus_PZ, tag.B0_PVALLFit_Dplus_piplus_PE);
        TLorentzVector PVALLFit_vDplus_piplus_0 = TLorentzVector(tag.B0_PVALLFit_Dplus_piplus_0_PX, tag.B0_PVALLFit_Dplus_piplus_0_PY, tag.B0_PVALLFit_Dplus_piplus_0_PZ, tag.B0_PVALLFit_Dplus_piplus_0_PE);

        TLorentzVector PVALLFit_vDplus = PVALLFit_vDplus_Kplus + PVALLFit_vDplus_piplus + PVALLFit_vDplus_piplus_0;

        // Computing the values for D
        outputFile1  << left << fixed
                    << setw(15) << PVALLFit_vDplus.E() 
                    << setw(15) << PVALLFit_vDplus.Px() 
                    << setw(15) << PVALLFit_vDplus.Py()
                    << setw(15) << PVALLFit_vDplus.Pz() << endl;

        // For p and pbar
        bool isPplus = false;
        bool isPbarplus = false;

        if (tag.B0_PVALLFit_a_1_1260_plus_pplus_0_ID * tag.D_ID < 0)
        {
            isPplus = true;
        }
        else {isPbarplus = true;}

        TLorentzVector PVALLFit_vpplus = TLorentzVector(0,0,0,0); 
		TLorentzVector PVALLFit_vpbar = TLorentzVector(0,0,0,0);
        if (isPplus){
        // Reconstructing p
        PVALLFit_vpplus = TLorentzVector(tag.B0_PVALLFit_a_1_1260_plus_pplus_0_PX, tag.B0_PVALLFit_a_1_1260_plus_pplus_0_PY, tag.B0_PVALLFit_a_1_1260_plus_pplus_0_PZ, tag.B0_PVALLFit_a_1_1260_plus_pplus_0_PE);
        PVALLFit_vpbar = TLorentzVector(tag.B0_PVALLFit_a_1_1260_plus_pplus_PX, tag.B0_PVALLFit_a_1_1260_plus_pplus_PY, tag.B0_PVALLFit_a_1_1260_plus_pplus_PZ, tag.B0_PVALLFit_a_1_1260_plus_pplus_PE);}
        else if (isPbarplus){
        // Reconstructing p bar
        PVALLFit_vpbar = TLorentzVector(tag.B0_PVALLFit_a_1_1260_plus_pplus_0_PX, tag.B0_PVALLFit_a_1_1260_plus_pplus_0_PY, tag.B0_PVALLFit_a_1_1260_plus_pplus_0_PZ, tag.B0_PVALLFit_a_1_1260_plus_pplus_0_PE);
        PVALLFit_vpplus = TLorentzVector(tag.B0_PVALLFit_a_1_1260_plus_pplus_PX, tag.B0_PVALLFit_a_1_1260_plus_pplus_PY, tag.B0_PVALLFit_a_1_1260_plus_pplus_PZ, tag.B0_PVALLFit_a_1_1260_plus_pplus_PE);}
            
        outputFile1  << left << fixed
                    << setw(15) << PVALLFit_vpplus.E() 
                    << setw(15) << PVALLFit_vpplus.Px() 
                    << setw(15) << PVALLFit_vpplus.Py()
                    << setw(15) << PVALLFit_vpplus.Pz() << endl;

        outputFile1  << left << fixed
                    << setw(15) << PVALLFit_vpbar.E() 
                    << setw(15) << PVALLFit_vpbar.Px() 
                    << setw(15) << PVALLFit_vpbar.Py()
                    << setw(15) << PVALLFit_vpbar.Pz() << endl;

        // For pi    
		TLorentzVector PVALLFit_vpiplus = TLorentzVector(tag.B0_PVALLFit_a_1_1260_plus_piplus_PX, tag.B0_PVALLFit_a_1_1260_plus_piplus_PY, tag.B0_PVALLFit_a_1_1260_plus_piplus_PZ, tag.B0_PVALLFit_a_1_1260_plus_piplus_PE);
            
        outputFile1  << left << fixed
                    << setw(15) << PVALLFit_vpiplus.E() 
                    << setw(15) << PVALLFit_vpiplus.Px() 
                    << setw(15) << PVALLFit_vpiplus.Py()
                    << setw(15) << PVALLFit_vpiplus.Pz() << endl;

        if (tag.pi_ID < 0)
        {
            outputFile2 << "-1" << endl;
        }
        else outputFile2 << "1" << endl;
    }

outputFile1.close();
outputFile2.close();

cout << "Output Files have been created" << endl;



    
}

