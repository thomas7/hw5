#! /usr/bin/env python2

import sys

def foo_funct(arg):
        print "Hello {}, nice to meet you!".format(arg)

def bar_funct(arg):
        print "Goodbye {}!".format(arg)

try:
    prog,action,name = sys.argv
except ValueError as e:
    sys.stderr.write("Usage: {} <action> NAME\n".format(sys.argv[0]))
    sys.stderr.write("Where <action> can be either 'hello' or 'bye'\n")
    sys.exit(1)

# Python doesn't have a case statement like many other languages, but you can do some powerful stuff with dictionaries
myDict = {'hello': foo_funct, 'bye': bar_funct}

try:
    myDict[action](name) # the values of the dictionary are callable functions!
except KeyError as e:
    sys.stderr.write("I don't know what you mean by {}, {}\n".format(action,name))
