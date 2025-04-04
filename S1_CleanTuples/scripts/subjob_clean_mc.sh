# ary_dz=("D2DD" "D2LL")
# ary_dz=("D4DD" "D4LL")

# ary_yr=("2016" "2017" "2018")
# ary_yr=("2011" "2012" "2015" "2016" "2017" "2018")
ary_yr=("2018")
ary_mg=("MU" "MD")

num_yr=${#ary_yr[@]}
num_mg=${#ary_mg[@]}

lb-conda default root -l --web=off -b  << EOF
.L make_clean_mc_B2Dpppi.C+
EOF

for((ii=0;ii<$num_yr;ii++))
do 
for((jj=0;jj<$num_mg;jj++))
do 
#========================================================================
#========================================================================

Input1="${ary_yr[$ii]}"
Input2="${ary_mg[$jj]}"
echo "------------------------"
echo "Submit ${Input1} ${Input2}"
./parse_make_CleanTuples_mc.sh  ${Input1} ${Input2}

echo ""
#========================================================================
#========================================================================
done 
done  

rm *.d
rm *.pcm
rm *.so
