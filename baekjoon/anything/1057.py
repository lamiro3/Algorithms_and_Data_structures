import sys
N, Jimin, Hansu = map(int, sys.stdin.readline().strip().split(' '))

def getRound(N, J, H):
    round = 1
    
    while N > 1:
        if (J%2 == 1 and J+1 == H) or (H%2 == 1 and H+1 == J): # 둘이 서로 붙게 되었을 때
            return round
        
        if J%2 == 0:
            if H%2 == 0:
                J = J//2
                H = H//2
            else:
                J = J//2
                H = H//2 + 1
        else:
            if H%2 == 0:
                J = J//2 + 1
                H = H//2
            else:
                J = J//2 + 1
                H = H//2 + 1
        
        round += 1
        
        if N%2 == 0:
            N = N//2
        else:
            N = N//2 + 1 # N이 홀수면 마지막 한 사람이 짝이 없어 남기 때문에, 부전승

print(getRound(N, Jimin, Hansu))