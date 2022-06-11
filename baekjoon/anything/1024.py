N, L = map(int, input().split(' '))

for l in range(L, 101):
    lx = N - l*(l+1)/2 # 직접 식 전개 해보면 알 수 있음
    
    if (lx%l == 0):
        lx = int(lx/l) 
    
        if (lx >= -1):
            for i in range(1, l+1):
                print(lx+i, end=' ')
            print()
            break

else:
    print(-1)