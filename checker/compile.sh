#!/bin/bash

[ -e a.out ] && rm a.out
g++ -I. *.cpp && ./a.out
