N = int(input())

if N < 100:
    print(N)

else:
    cnt = 99
    
    for i in range(100, N+1):
        ns = list(map(int, list(str(i))))
        isArith = False
        for n in range(len(ns)-2):
            if ns[n+1] - ns[n] == ns[n+2] - ns[n+1]:
                isArith = True
            else:
                isArith = False
                break
        
        if isArith:
            cnt += 1
            
    print(cnt)