#========================================================================
#========================================================================
Input=../../S2_CutTuples/root/data_${1}_${2}_precut_add.root
Output=../root/data_${1}_${2}_precut_add_BDT.root
echo "------------------------"
echo "Add BDT to ${Input}"

lb-conda default root -l --web=off -b  << EOF
.L TMVAClassificationApplication_C.so
TMVAClassificationApplication("${Input}", "${Output}", "")
EOF

echo "Done ${Input}"
#========================================================================
#========================================================================
