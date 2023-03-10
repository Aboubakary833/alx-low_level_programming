#!/bin/bash
gcc  -Wall -Werror -Wextra -c *.c
ar -rcs liball.a *.o