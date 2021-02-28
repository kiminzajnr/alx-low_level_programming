#!/bin/bash

gcc -c -Wall -Wextra *.c && ar -rcs liball.a *.o
