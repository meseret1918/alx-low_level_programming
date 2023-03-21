#!/bin/bash
wget -O /tmp/101-test.so https://github.com/meseret1918/alx-low_level_programming/raw/master/0x17-dynamic_libraries/101-test.so
export LD_PRELOAD=/tmp/101-test.so
