import sys
input = sys.stdin.readline
SOMENUM = 998244353

def comb(x, y):
    if x < y: return 0
    elif x == y or y == 0: return 1
    elif y == x-1 or y == 1: return x
    else: return comb(x-1, y-1) + comb(x-1, y)

n, af, x, y, m, k = map(int, input().split())

a = [af]
b = [0]*n
c = []


for i in range(n-1):
    a.append((a[-1]*x + y)%SOMENUM)

for i in range(n):
    for j in range(i):
        b[i] += comb(i-j+1, k)*a[j]
    
    b[i] %= SOMENUM
    c.append(b[i]*(i+1))
    
result = c.pop()
while c:
    result ^= c.pop()

print(a)
print(b)
print(c)
print(result)