#!/bin/bash
wget -P /tmp https://raw.githubusercontent.com/amasiani/alx_low_level_programming/main/0x18-dynamic_libraries/library.so
export LD_PRELOAD=/tmp/library.so
