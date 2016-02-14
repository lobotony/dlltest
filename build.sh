#!/bin/sh

echo ".. building dll"
clang dll.c -dynamiclib -install_name dll.dylib -undefined dynamic_lookup -o dll.dylib 
echo ".. building main"
clang main.c -o main
echo ".. done"