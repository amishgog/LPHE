Input=${1}
Ouput=${2}

echo "------------------------"
echo "Cleaning ${Input}"
echo "Cleaning ${Ouput}"

lb-conda default root -l --web=off -b  << EOF
.L make_RawTuples_mc_C.so
make_RawTuples_mc("${Input}", "${Ouput}")
EOF
echo "Done ${Input}"
echo "Done ${Ouput}"
