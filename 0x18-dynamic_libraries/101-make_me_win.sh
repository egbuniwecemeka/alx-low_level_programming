#!/bin/bash
wget -P .. https://raw.githubusercontent.com/egbuniwecemeka/alx-low_level_programming/master/0x18-dynamic_libraries/libmole.so
export LD_PRELOAD="&PWD/../libmole.so"
