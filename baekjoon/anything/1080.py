N, M = map(int, input().split(' ')) # N행 M열
A, B = [], []
score = [[0 for _ in range(M-2)] for _ in range(N-2)]

for r in range(N):
    A.append(list(map(int, list(input()))))
for r in range(N):
    B.append(list(map(int, list(input()))))

def isReversed(m1, m2):
    if m1 == m2:
        return True
    else:
        return False

def isDuplicated(t1, t2):
    cnt = 0
    for i in range(3):
        for j in range(3):
            if t1[i][j] == t2[i][j]:
                cnt += 1
    return cnt

def detectMaxMat(m1, m2):
    MAX = 0
    MAX_INDICES = [0, 0]
    for r in range(N-3):
        for c in range(M-3):
            t1 = m1[r:r+3][c:c+3]
            t2 = m2[r:r+3][c:c+3]
            score[r][c] = isDuplicated(t1, t2)
            
            if MAX < score[r][c]:
                MAX = score[r][c]
                MAX_INDICES[0] = r
                MAX_INDICES[1] = c

    return MAX_INDICES[0], MAX_INDICES[1]

cnt = 0

while True:
    if isReversed(A, B):
        break
    r,c = detectMaxMat(A, B)
    MaxMat = A[r:r+3][c:c+3]
    
    for i in range(r, r+3):
        for j in range(c, c+3):
            if MaxMat[i][j] == 0:
                MaxMat[i][j] = 1
            else:
                MaxMat[i][j] = 0
    cnt += 1

print(cnt)