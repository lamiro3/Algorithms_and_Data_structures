import sys

alpha = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z']
num = int(sys.stdin.readline().strip())
txt = [ ['\0', 0] for _ in range(num) ]

def get_score(txt, len):
    s = 0
    for i in range(len):
        s += (alpha.index(txt[i])+1)*(26**(len-i-1)) # 점수를 26진수 꼴로 표현해야 중복이 안됨 (26진수 꼴을 10진수로 나타낸 것)
    return s
    
for n in range(num):
    txt[n][0] = sys.stdin.readline().strip()
    txt[n][1] = get_score(txt[n][0], len(txt[n][0]))

txt = list(set([tuple(t) for t in txt])) 
txt.sort(key = lambda x:x[1])
for i in range(len(txt)):
    print(txt[i][0])