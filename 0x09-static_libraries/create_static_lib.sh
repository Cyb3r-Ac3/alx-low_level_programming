#!/bin/bash
gcc -c -Wall -Wextra -Werror -pedantic *.c
ar rc liball.a *.o
ranlib liball.a
