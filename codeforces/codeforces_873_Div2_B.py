import sys
from copy import deepcopy
input = sys.stdin.readline

t = int(input())

for _ in range(t):
    p = int(input()) # l of perm
    arr = list(map(int, input().split()))
    ans = list(sorted(arr))
    k = p//2
    temp = arr
    result = []
    
    while k>0:
            temp = deepcopy(arr)
            while True:
                for i in range(p-k):
                    if temp[i] > temp[i+k]:
                        temp[i], temp[i+k] = temp[i+k], temp[i]
                
                if temp == ans:
                    result.append(k)
                    k -=1
                    break
    print(result[0])