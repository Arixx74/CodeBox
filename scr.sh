#!/bin/bash

#A simple script to create two files with odd and even numbers

echo "Hello World!"
for i in {0..200}
do
    if (($i%2 == 0))
    then
        echo $i>> even.dat
    else
        echo $i>> odd.dat
    fi
done