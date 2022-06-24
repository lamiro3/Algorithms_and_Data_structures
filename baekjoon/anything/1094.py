X = int(input())
num = 0

while X!=0:
    for i in range(6,-1,-1):
        if 2**i <= X:
            X -= 2**i
            num+=1
            break
    if X == 0:
        break
print(num)