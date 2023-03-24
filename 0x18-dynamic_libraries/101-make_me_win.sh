#!/bin/bash
wget -P .. https://github.com/meseret1918/alx-low_level_programming/blob/master/0x18-dynamic_libraries/101-test.o
export LD_PRELOAD="$PWD/../101-test.so"
