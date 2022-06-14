N, M = map(int, input().split(' '))
rect = [[]*M]*N
for n in range(N):
    rect[n] = list(input())
area = 0

for l in range(N):
    for n in range(N-l):
        for m in range(M-l):
            if rect[n][m] == rect[n+l][m] and rect[n][m] == rect[n][m+l] and rect[n][m] == rect[n+l][m+l]:
                area = (l+1)**2
                
print(area)