#!/bin/bash

N=$(nproc)

ninja -j$N -C build/ clean
