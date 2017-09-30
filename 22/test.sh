#!/bin/bash

./main -d < input.txt >> output.txt
./main -e < output.txt >> return.txt

echo "INPUT=============="
cat input.txt
echo "OUTPUT============="
cat output.txt
echo "INPUT?============="
cat return.txt

rm output.txt return.txt
