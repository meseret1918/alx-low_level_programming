#!/bin/bash
wget -p .. https://raw.github.com/meseret1918/alx-low_level_programming/master/0x18-dynamic_libraries/test.so
export LD_PRELOAD="$PWD/../test.so"
