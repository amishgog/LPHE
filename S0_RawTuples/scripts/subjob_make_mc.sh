# Write all the tuples for the MC simulation samples
array_year=(
    "/panfs/yunxuan/LHCb/B2Dpppi/RunCode/MC/2018MU/root"
    "/panfs/yunxuan/LHCb/B2Dpppi/RunCode/MC/2018MD/root"
)

array_samples=("2018_MU" "2018_MD")


numyear=${#array_year[@]}
nummode=${#array_samples[@]}

lb-conda default root -l --web=off -b  << EOF
.L make_RawTuples_mc.C+
EOF

for((ii=0;ii<$nummode;ii++))
do 
#========================================================================
#========================================================================

Input1="${array_year[$ii]}"
Input2="${array_samples[$ii]}"
echo "------------------------"
echo "Submit ${Input1} ${Input2}"
./parse_make_RawTuples_mc.sh  ${Input1} ${Input2} 

echo ""
#========================================================================
#========================================================================
done 

rm *.d
rm *.pcm
rm *.so
