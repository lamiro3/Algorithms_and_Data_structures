import sys
input = sys.stdin.readline

txt = list(input())
N = int(input())

CMD_LST = {
    'L':0,
    'D':1,
    'B':2,
    'P':3
}
csr = len(txt)
for _ in range(N):
    cmd = list(input().split())
    C, O = CMD_LST[cmd[0]], cmd[1] if len(cmd)!=1 else 0
    if C == 0:
        if csr != 0:
            csr -= 1
    elif C == 1:
        if csr != len(txt):
            csr += 1
    elif C == 2:
        if csr == 0:
            continue
        else:
            del txt[csr-1]
            csr -= 1
    elif C == 3:
        txt.insert(csr-1, O)
        csr += 1
# 뭐가 문제지?

print(str(txt))