#!/bin/bash
wget -P .. https://raw.githubusercontent.com/meseret1918/alx-low_level_programming/master/0x18-dynamic_libraries/101-test.so
export LD_PRELOAD="$PWD/../101-test.so"
