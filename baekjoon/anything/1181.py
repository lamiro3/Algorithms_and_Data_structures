alpha = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z']
num = int(input())
txt = [ ['\0', 0] for _ in range(num) ]

def get_score(txt, len):
    s = 0
    for i in range(len):
        s += (alpha.index(txt[i])+1)*(10**(len-i-1))
    return s
    
for n in range(num):
    temp_txt = [txt[t][0] for t in range(n)]
    t = input()
    
    if t in temp_txt:
        continue

    txt[n][0] = t
    txt[n][1] = get_score(txt[n][0], len(txt[n][0]))
        
txt.sort(key = lambda x:x[1])
for i in range(num):
    print(txt[i][0])