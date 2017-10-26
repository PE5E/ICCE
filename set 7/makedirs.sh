#!/bin/bash

mkdir report
cp resources/main.tex report

for i in `seq $1 $2`;
do
   mkdir $i
   cp resources/solution.tex $i
   cp resources/Makefile $i
   cp resources/makeclass $i
   sed -i "s/+/$i/g" $i/solution.tex
   echo "\import{../$i/}{solution.tex}" >> report/main.tex
   echo -e "\n" >> report/main.tex
done 

echo "\end{document}" >> report/main.tex
