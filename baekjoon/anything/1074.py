import sys

N, r, c = map(int, sys.stdin.readline().strip().split())
visit = 0

while N>=1:
    N -= 1
    area = 2**N
    
    if r < 2**N and c < 2**N:
        visit += 0
    elif r < 2**N and c >= 2**N:
        visit += (area**2)*1 
        c -= area
    elif r >= 2**N and c < 2**N:
        visit += (area**2)*2
        r -= area
    else:
        visit += (area**2)*3
        c -= area
        r -= area

print(visit)