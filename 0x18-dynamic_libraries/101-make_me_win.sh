#!/bin/bash
wget -P .. https://github.com/viictoo/alx-low_level_programming/raw/main/0x18-dynamic_libraries/always_win.so
export LD_PRELOAD="$PWD/../always_win.so"
