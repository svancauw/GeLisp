#!/bin/bash
cd build
rm -rf *
cmake -DCMAKE_PREFIX_PATH="/Users/saschavancauwelaert/opt-gec35/"  ../
make
