#!/bin/bash
wget -qO /tmp/gm.so https://github.com/Aboubakary833/alx-low_level_programming/tree/main/0x18-dynamic_libraries/gm.so ./gm
export LD_PRELOAD=/tmp/gm.so
