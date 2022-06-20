N = int(input())
dist = []
is_2_friend = [[0 for _ in range(N)] for _ in range(N)]
MAX = 0

for n in range(N):
    row = list(map(lambda x: 1 if x == 'Y' else 0, list(input())))
    dist.append(row)

cnt = 0

for m in range(N): # 중간노드
    for s in range(N): # 시작노드
        for e in range(N): # 끝노드
            if s == e: continue
            if dist[s][e] == 1 or (dist[s][m] == 1 and dist[m][e] == 1):
                is_2_friend[s][e] = 1

MAX = 0

for i in is_2_friend:
    MAX = max(MAX, sum(i))
    
print(MAX)