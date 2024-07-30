# Include all the indiviual tuples to make the raw tuples
array_year=( 
    "/panfs/yunxuan/LHCb/B2Dpppi/RunCode/Data/LFN/lfn_1_2011MUB2Dpppi"
    "/panfs/yunxuan/LHCb/B2Dpppi/RunCode/Data/LFN/lfn_2_2011MDB2Dpppi"
    "/panfs/yunxuan/LHCb/B2Dpppi/RunCode/Data/LFN/lfn_3_2012MUB2Dpppi"
    "/panfs/yunxuan/LHCb/B2Dpppi/RunCode/Data/LFN/lfn_4_2012MDB2Dpppi"
    "/panfs/yunxuan/LHCb/B2Dpppi/RunCode/Data/LFN/lfn_5_2015MUB2Dpppi"
    "/panfs/yunxuan/LHCb/B2Dpppi/RunCode/Data/LFN/lfn_6_2015MDB2Dpppi"
    "/panfs/yunxuan/LHCb/B2Dpppi/RunCode/Data/LFN/lfn_7_2016MUB2Dpppi"
    "/panfs/yunxuan/LHCb/B2Dpppi/RunCode/Data/LFN/lfn_8_2016MDB2Dpppi"
    "/panfs/yunxuan/LHCb/B2Dpppi/RunCode/Data/LFN/lfn_9_2017MUB2Dpppi"
    "/panfs/yunxuan/LHCb/B2Dpppi/RunCode/Data/LFN/lfn_10_2017MDB2Dpppi"
    "/panfs/yunxuan/LHCb/B2Dpppi/RunCode/Data/LFN/lfn_11_2018MUB2Dpppi"
    "/panfs/yunxuan/LHCb/B2Dpppi/RunCode/Data/LFN/lfn_12_2018MDB2Dpppi"
)

array_samples=("2011_MU" "2011_MD" "2012_MU" "2012_MD" "2015_MU" "2015_MD" "2016_MU" "2016_MD" "2017_MU" "2017_MD" "2018_MU" "2018_MD")

numyear=${#array_year[@]}
nummode=${#array_samples[@]}

lb-conda default root -l --web=off -b  << EOF
.L make_RawTuples_data.C+
EOF

for((ii=0;ii<$nummode;ii++))
do 
#========================================================================
#========================================================================

Input1="${array_year[$ii]}"
Input2="${array_samples[$ii]}"
echo "------------------------"
echo "Submit ${Input1} ${Input2}"
./parse_make_RawTuples_data.sh  ${Input1} ${Input2} 

echo ""
#========================================================================
#========================================================================
done 

rm *.d
rm *.pcm
rm *.so
