#!/bin/bash

for i in `seq $1 $2`;
do
   mkdir $i
   cp resources/Makefile $i
   cp resources/makeclass $i
done 

