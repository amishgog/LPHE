# ary_dz=("B2DDD" "B2DLL")
ary_yr=("2011" "2012" "2015" "2016" "2017" "2018")
ary_mg=("MU" "MD")

num_dz=${#ary_dz[@]}
num_yr=${#ary_yr[@]}
num_mg=${#ary_mg[@]}

lb-conda default root -l --web=off -b  << EOF
.L copytree_presel.C+
EOF

# for((ii=0;ii<$num_dz;ii++))
# do 
for((jj=0;jj<$num_yr;jj++))
do 
for((kk=0;kk<$num_mg;kk++))
do 
#========================================================================
#========================================================================

# Input1="${ary_dz[$ii]}"
Input2="${ary_yr[$jj]}"
Input3="${ary_mg[$kk]}"
echo "------------------------"
echo "Submit  ${Input2} ${Input3}"
./parse_cut_dt.sh  ${Input2} ${Input3}

echo ""
#========================================================================
#========================================================================
done 
done 
# done 

rm *.d
rm *.pcm
rm *.so
