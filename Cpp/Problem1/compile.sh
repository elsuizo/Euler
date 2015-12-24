#!/bin/bash
clang++-3.7 -o $1 -std=c++11 "./$1.cpp" && ./$1
