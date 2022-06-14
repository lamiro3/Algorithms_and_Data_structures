N, K = map(int, input().split(' '))
cnt = 0

while bin(N).count('1') > K: #binary로 변환했을 때 1의 개수 = 병이 N개 일 때 비어있지 않은 물병의 개수
    N = N+1
    cnt = cnt + 1

print(cnt)