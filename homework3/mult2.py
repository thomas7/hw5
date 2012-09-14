#!/usr/bin/env python
# ECE 2524 Homework 3 Problem 2
# Thomas Elliott

import argparse
import sys
import fileinput

parser = argparse.ArgumentParser(description='Multiply some integers.')
parser.add_argument("--ignore-blanks",  help="skips over blank lines if they are entered",  action = "store_true")
parser.add_argument('--ignore-non-numeric',  help="skips over charactres that aren't integers", action = "store_true")
parser.add_argument("infile", nargs='*',  type=argparse.FileType('r'))

args = parser.parse_args()

product = 1
argInc = 0

if args.ignore-blanks:
    ++argInc
if args.ignore-non-numeric:
    ++argInc

for data in fileinput.input(sys.argv[1+argInc:]):
    try:
        if data == '\n': #for displaying the product if a blank line is entered
            print product
            product = 1
        else:
            product *= int(data)
    
    except ValueError as e:
        e = "You must use only integers, other characters are not excepted\n"
        sys.stderr.write(e)
        sys.exit(1)
print product
