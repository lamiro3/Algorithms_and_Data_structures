import sys
sys.setrecursionlimit(10**5) # 최대 재귀함수 깊이 설정
                            # 10^6일 경우 메모리 초과 발생
input = sys.stdin.readline

T = int(input())

def DFS(now, cycle):
    global result
    
    visited[now-1] = True
    cycle.append(now)
    next = S[now-1]
    
    if visited[next-1]: # 방문했던 곳이라면
        if next in cycle:
            # cycle 내 next 부터 cycle의 끝까지 result에 추가
            result += cycle[cycle.index(next):]
        return
    
    else:
        DFS(next, cycle)
        

for _ in range(T):
  N = int(input())
  S = list(map(int, input().split()))
  visited = [False for _ in range(N)]
  result = []

  for i in range(1, N+1):
    if not visited[i-1]:
        DFS(i, [])
  
  print(N - len(result))