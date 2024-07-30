Input=${1}
Output=${2}

echo "------------------------"
echo "Cleaning ${Input}"
echo "Cleaning ${Ouput}"

lb-conda default root -l --web=off -b  << EOF
.L make_RawTuples_data_C.so
make_RawTuples_data("${Input}", "${Output}")
EOF
echo "Done ${Input}"
echo "Done ${Output}"
