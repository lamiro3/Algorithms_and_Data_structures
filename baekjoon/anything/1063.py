dx = [1, -1, 0, 0, 1, -1, 1, -1]
dy = [0, 0, -1, 1, 1, 1, -1, -1]
CMD = ['R','L','B','T','RT','LT','RB','LB']
ALPHA = ['A', 'B', 'C', 'D', 'E', 'F', 'G','H']

king, stone, N = input().split(' ')
N = int(N)

k_pos = [ALPHA.index(king[0]), int(king[1])]
s_pos = [ALPHA.index(stone[0]), int(stone[1])]

for i in range(N):
    idx = CMD.index(input())
    tx, ty = k_pos[0] + dx[idx], k_pos[1] + dy[idx]
    
    if tx < 0 or ty < 1 or tx > 7 or ty > 8:
        continue
    
    if tx == s_pos[0] and ty == s_pos[1]:
        ux = s_pos[0] + dx[idx]
        uy = s_pos[1] + dy[idx]
        
        if ux < 0 or uy < 1 or ux > 7 or uy > 8:
            continue
        
        s_pos[0], s_pos[1] = ux, uy
    k_pos[0], k_pos[1] = tx, ty
    
print(ALPHA[k_pos[0]] + str(k_pos[1]))
print(ALPHA[s_pos[0]] + str(s_pos[1]))