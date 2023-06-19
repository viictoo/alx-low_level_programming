#!/bin/bash
wget -qP /tmp/ https://github.com/viictoo/alx-low_level_programming/tree/main/0x18-dynamic_libraries/101-lib.so
export LD_PRELOAD="/tmp/101-lib.so"
