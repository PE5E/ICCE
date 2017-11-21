#!/bin/bash
for i in `seq 0 $1`;
do
    echo $((1 + RANDOM % 10)) >> numbers.txt
done
