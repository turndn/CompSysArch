#! /usr/bin/env python

import sys
import re


def parse(filename):
    inst_l = []
    with open(filename) as f:
        while True:
            r = f.readline()
            if r:
                inst_l.append([x for x in re.split(
                    '[\t, \n]*', r) if len(x) > 0])
            else:
                break
    return inst_l


if __name__ == '__main__':
    if len(sys.argv) < 2:
        raise ValueError('The number of arguments must be grater than 1.')

    label = {}
    counter = 0
    instruction_list = parse(sys.argv[1])
    for instruction in instruction_list:
        if len(instruction) == 0:
            continue
        if ":" in instruction[0]:
            label[instruction[0]] = counter
        else:
            print("{}: {}".format(counter, instruction))
            counter += 1

    for x in label:
        print("{}: {}".format(x, label[x]))
