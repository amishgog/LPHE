ary_yr=("2018")
ary_mg=("MU" "MD")

num_yr=${#ary_yr[@]}
num_mg=${#ary_mg[@]}

lb-conda default root -l --web=off -b  << EOF
.L make_checked_mc.C+
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
./parse_make_CheckedTuples_mc.sh  ${Input1} ${Input2}

echo ""
#========================================================================
#========================================================================
done
done

rm *.d
rm *.pcm
rm *.so