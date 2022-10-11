L, R = map(int, input().split(' '))
Lf, Rf = str(L)[0], str(R)[0]
res = 0

if Lf != Rf:
    res = 0
else:
    if Lf == Rf == 8:
        res+=1
        