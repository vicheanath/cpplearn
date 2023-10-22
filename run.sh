#!/bin/bash
file=$1

# remove extension
file=${file%.*}
# remove old .out file
rm -f $file.out

g++ -std=c++11 -O2 -Wall $file.cpp -o $file.out

# echo with color
echo -e "\033[0;32mCompiling $file.cpp\033[0m"
echo -e "\033[0;32mRunning $file.out\033[0m"
echo -e "\033[0;32mOutput:\033[0m"

# sleep 1s
sleep 1

# try catch ./$file.out runtime error
./$file.out || echo -e "\033[0;31mRuntime Error\033[0m"