#!/bin/bash
g++ main.cc filter/*.cc strings/*.cc -o main --std=c++17 -Werror -Wall

cat input.txt
./main < input.txt
