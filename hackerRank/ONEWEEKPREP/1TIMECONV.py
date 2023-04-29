# LINK : https://www.hackerrank.com/challenges/one-week-preparation-kit-time-conversion/problem?isFullScreen=true&h_l=interview&playlist_slugs%5B%5D=preparation-kits&playlist_slugs%5B%5D=one-week-preparation-kit&playlist_slugs%5B%5D=one-week-day-one

#  Problem:
#  Given a time in -hour AM/PM format, convert it to military (24-hour) time.

#!/bin/python3

import math
import os
import random
import re
import sys

def timeConversion(s):
    if s[:2]=='12':
        if s[-2]=='P':
            return s[:-2]
        else :
            return f'00{s[2:-2]}'
    elif s[-2]=='p':
        return f'{int(s[:2])+12}{s[2:-2]}'
    else :
        return s[:-2]

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    s = input()

    result = timeConversion(s)

    fptr.write(result + '\n')

    fptr.close()

