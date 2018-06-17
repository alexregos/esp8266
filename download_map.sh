#!/bin/bash

mkspiffs  -c data -p 256 -b 8192 -s 32768 /tmp/map.spiffs.bin
esptool -cd nodemcu -cb 921600 -cp /dev/ttyUSB0 -ca 0x100000 -cf /tmp/map.spiffs.bin
