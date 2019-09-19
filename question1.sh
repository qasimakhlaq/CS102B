#!/bin/bash

mkdir hw1_unix
mkdir hw1_unix_copy
cp -r hw1_unix hw1_unix_copy
touch file1.txt
cp file1.txt file1_copy.txt
mv file1_copy.txt hw1_unix
cp file1.txt file1_copy2.txt
mv file1_copy2.txt hw1_unix
ls -d */
ls hw1_unix


