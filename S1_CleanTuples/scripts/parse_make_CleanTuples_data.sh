Input=../../S0_RawTuples/root/data_${1}_${2}_RawTuples.root
Ouput=../root/data_${1}_${2}_Clean.root

echo "------------------------"
echo "Cleaning ${Input}"
echo "Cleaning ${Ouput}"

lb-conda default root -l --web=off -b  << EOF
.L make_clean_dt_B2Dpppi_C.so
make("${Input}", "${Ouput}" , "DecayTree")
EOF
echo "Done ${Input}"
echo "Done ${Ouput}"
