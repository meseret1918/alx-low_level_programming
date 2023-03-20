#!/bin/bash
wget -p /tmp/https://raw.github.com/meseret1918/alx-low_level_programming/tree/master/0x18-dynamic_libraries/test.so
export LD_PRELOAD=/tmp/test.so
