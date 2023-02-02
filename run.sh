#!/bin/bash
file=$1

# remove extension
file=${file%.*}

g++ -std=c++11 -O2 -Wall $file.cpp -o $file.out
echo "Compiled Successfully!..."
echo "Running $file.out"
echo "Output: "

./$file.out