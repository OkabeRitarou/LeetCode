#! /bin/bash

if [ ! $(cat file.txt | wc -l ) -lt 10 ]; then
    head -10 file.txt | tail -1
fi

