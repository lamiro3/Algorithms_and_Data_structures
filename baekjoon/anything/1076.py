C1 = input()
C2 = input()
C3 = input()

def detect_COLOR(color):
    if color == 'black':
        return 0
    elif color == 'brown':
        return 1
    elif color == 'red':
        return 2
    elif color == 'orange':
        return 3
    elif color == 'yellow':
        return 4
    elif color == 'green':
        return 5
    elif color == 'blue':
        return 6
    elif color == 'violet':
        return 7
    elif color == 'grey':
        return 8
    elif color == 'white':
        return 9

print((detect_COLOR(C1)*10+detect_COLOR(C2))*(10**detect_COLOR(C3)))