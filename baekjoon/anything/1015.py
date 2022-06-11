import sys

N = int(sys.stdin.readline().strip())
A = list(map(lambda x: int(x), sys.stdin.readline().strip().split(' ')))
P = [0]*N
n = 0;

A_nums = list(set(A))
A_nums.sort()

for num in A_nums:
    for i in range(N):
        if num == A[i]:
            P[i] = n 
            n += 1

res = ''
for p in P:
    res += str(p) + ' '

res = res[:-1]
print(res)