#!/bin/bash

if [[ "$OSTYPE" == "linux-gnu" ]]; then
nasm -f elf64 data.asm -o data.o
elif [[ "$OSTYPE" == "darwin"* ]]; then
nasm -f macho64 data.asm -o data.o
fi

clang -c main.c

clang main.o data.o -o binaryEmbedding

./binaryEmbedding
