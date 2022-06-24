cnt = 0
for i in range(8):
    A = list(input())
    if (i%2) == 0:
        for j in range(4):
            if A[j*2] == 'F':
                cnt += 1
    else:
        for j in range(4):
            if A[j*2+1] == 'F':
                cnt += 1
print(cnt)