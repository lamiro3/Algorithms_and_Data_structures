N, M = map(int, input().split(' '))
targets = list(map(int, input().split(' ')))
queue = [i for i in range(1, N+1)]
cnt = 0

for target in targets:
    if target <= N/2:
        if target != queue[0]:
            cnt += 1
            queue = queue[1:] + [queue[0]]        
        else:
            del queue[0]
            continue
    else:
        if target != queue[-1]:
            cnt += 1
            queue = [queue[-1]] + queue[:-1]
        else:
            del queue[-1]
            continue
            
print(cnt)
    
    

            