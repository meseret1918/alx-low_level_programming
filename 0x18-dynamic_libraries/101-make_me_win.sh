#!/bin/bash
wget -O /tmp/lib101-test.so https://github.com/meseret1918/alx-low_level_programming/raw/master/0x18-dynamic_libraries/1ib101-test.so
export LD_PRELOAD=/tmp/lib101-test.so
