import sys
import math
X, Y = map(int, sys.stdin.readline().strip().split())
cnt = 0

if int(Y*100/X) == 99 or X == Y:
    print(-1)
else:
    # 나눗셈 곱셈 순서 매우 중요!!
    res = (X*(int(Y*100/X)+1)-100*Y)/(99-int(Y*100/X))
    print(math.ceil(round(res, 10)))