#!/bin/bash
gcc -c -Wall -pedantic -c *.c
ar -rc liball.a *.o
ar -rcs liball.a *.o
