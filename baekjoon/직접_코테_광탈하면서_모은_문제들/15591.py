from copy import deepcopy

def minimum(a, b):
    if a > b:
        return b
    else:
        return a

N, Q = list(map(int, input().split(' ')))
# N : 동영상 개수
# Q : 질문 개수

nodes = []
add = []

for i in range(1, N):
    p, q, r = list(map(int, input().split(' ')))
    nodes.append([p, q, r])

for node in nodes:
    temps = deepcopy(nodes)
    temps.remove(node)
    for temp in temps:
        m = minimum(node[2], temp[2])
        if node[0] == temp[0]:
            add.append([node[1], temp[1], m])
        elif node[0] == temp[1]:
            add.append([node[1], temp[0], m])
        elif node[1] == temp[0]:
            add.append([node[0], temp[1], m])
        else:
            add.append([node[0], temp[0], m])

nodes = 2*nodes + add
cnts = []

for _ in range(Q):
    k, v = list(map(int, input().split(' ')))
    cnt = 0
    for node in nodes:
        if v in node[:2] and node[2] >= k:
            cnt+=1
    cnts.append(cnt//2)
    
for cnt in cnts:
    print(cnt)