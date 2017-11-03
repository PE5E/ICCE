#!/bin/bash
# usage:
# ./prepmail.sh 50 52
# will copy the directories for exerises 50, 51, 52 to
#  /mail , it then removes some useless files and
# prepares an order.txt file for each

if [ "$#" -ne 2 ]; then
    echo "ERROR: wrong number of arguments"
    exit 1
fi

# dir
mkdir mail

# loop over exercises
for i in `seq $1 $2`;
do
    # copy 
    cp -r $i mail/
    cd mail/$i 
    # clean 
    make clean
    rm Makefile makeclass GIT_INFO
    # prepare order.txt
    order=$(tree -fi)
    echo "$order" >> order.txt
    sed -i 's|./||' order.txt
    sed -i '1d' order.txt
    sed -i '$ d' order.txt
    sed -i '$ d' order.txt
    cd ../..
done
