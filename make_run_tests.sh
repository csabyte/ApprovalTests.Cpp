#!/bin/sh
rm -rf build/
mkdir build && cd build
../configure && make
./tests/run_all_tests
