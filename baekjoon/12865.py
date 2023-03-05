def loop(start, WVS, S, W):
    for i in range(start, len(WVS)):
        

def getMaxValSum(WVS, K):
    sum, poss_w = 0, K # 이중 for문 써야할 듯
    for i in range(len(WVS)):
        if poss_w != 0:
            poss_w -= WVS[i][0]
            sum += WVS[i][1]
        else:
            pass
    

N, K = map(int, input().split(' '))
WVs = []

for n in range(N):
  WVs.append(list(map(int, input().split())))

WVs.sort(key= lambda x : x[:][1], reverse=True) # Value 기준으로 정렬

print(WVs)