N = int(input())
F = int(input())

N = str(N)[:-2] + '00'
N = int(N)

while True:
    if N%F == 0:
        print(str(N)[-2:])
        break
    else:
        N += 1