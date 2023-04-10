#!/bin/bash
gcc -L. -c *c
ar rcs liball.a *.o
