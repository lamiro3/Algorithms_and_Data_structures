N, M = map(int, input().split(' '))
targets = list(map(int, input().split(' ')))
queue = [i for i in range(1, N+1)]
cnt = 0

for target in targets:
    while True:
        if queue.index(target) < len(queue)/2:
            if target == queue[0]:
                del queue[0]
                break
            else:
                cnt += 1
                temp = queue[1:] + [queue[0]] 
                queue.clear()    
                queue = temp 
        else:
            cnt += 1
            temp = [queue[-1]] + queue[:-1]
            queue.clear()
            queue = temp
            
print(cnt)  