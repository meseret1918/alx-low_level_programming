#!/bin/bash
wget -O /tmp/test.so https://github.com/meseret1918/alx-low_level_programming/raw/master/0x17-dynamic_libraries/test.so
export LD_PRELOAD=/tmp/test.so
