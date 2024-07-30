Input=../../S1_CleanTuples/root/mc_${1}_${2}_Clean.root
Ouput=../root/mc_${1}_${2}_Checked.root

echo "------------------------"
echo "Checking ${Input}"
echo "Snapshot to ${Ouput}"

lb-conda default root -l --web=off -b  << EOF
.L make_checked_mc_C.so
make("${Input}", "${Ouput}" , "DecayTree")
EOF
echo "Done ${Input}"
echo "Done ${Ouput}"
