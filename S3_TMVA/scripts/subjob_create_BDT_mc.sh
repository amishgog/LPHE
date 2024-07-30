ary_yr=("2018")
ary_mg=("MU" "MD")

num_yr=${#ary_yr[@]}
num_mg=${#ary_mg[@]}

lb-conda default root -l --web=off -b  << EOF
.L TMVAClassificationApplication.C+
EOF

for((jj=0;jj<$num_yr;jj++))
do 
for((kk=0;kk<$num_mg;kk++))
do 
#========================================================================
#========================================================================

Input2="${ary_yr[$jj]}"
Input3="${ary_mg[$kk]}"
echo "------------------------"
echo "Submit  ${Input2} ${Input3}"
./parse_create_BDT_mc.sh  ${Input2} ${Input3}

echo ""
#========================================================================
#========================================================================
done 
done 

rm *.d
rm *.pcm
rm *.so
