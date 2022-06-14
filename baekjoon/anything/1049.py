N, M = map(int, input().split(' '))
bundle, indiv = [0]*M, [0]*M
answer = 0

for m in range(M):
    bundle[m], indiv[m] = map(int, input().split(' '))
b_min, i_min = min(bundle), min(indiv)

if b_min < 6*i_min:
    if b_min < (N%6)*i_min:
        print((N//6)*b_min + b_min)
    else:
        print((N//6)*b_min + (N%6)*i_min)
else:
    print(N*i_min)