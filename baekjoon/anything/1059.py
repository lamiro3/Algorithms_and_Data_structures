from math import *

L = int(input())
S = list(map(int, input().split(' ')))
S.sort()
n = int(input())
result = 0

for l in range(L-1):
    if S[l] < n and n < S[l+1]:
        front, back = S[l], S[l+1]
        result = (back-n)*(n - front) - 1
    elif S[l] == n or S[l+1] == n:
        result = 0
        break
    elif n < S[0]:
        back = S[0]
        result = (back-n)*(n) - 1
        break
    elif n > S[-1]:
        result = 0

print(int(result))