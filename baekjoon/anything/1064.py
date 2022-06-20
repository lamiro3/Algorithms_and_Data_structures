from math import *
import sys
x1, y1, x2, y2, x3, y3 = map(int, input().split(' '))
A = sqrt((x2 - x1)**2 + (y2 - y1)**2)
B = sqrt((x3 - x2)**2 + (y3 - y2)**2)
C = sqrt((x1 - x3)**2 + (y1 - y3)**2)

if (y2-y1)*(x3-x2) == (y3-y2)*(x2-x1): # 세 점이 모두 평행할 때
    print(-1.0)
else:
    m = min(A+B, B+C, C+A)
    M = max(A+B, B+C, C+A)
    print((M-m+10**-12)*2)