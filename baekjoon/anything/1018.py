import numpy as np

row, column = map(int, input().split(' '))

grid = [[]]*row

target1 = [
    ['W','B','W','B','W','B','W','B'],
    ['B','W','B','W','B','W','B','W'],
    ['W','B','W','B','W','B','W','B'],
    ['B','W','B','W','B','W','B','W'],
    ['W','B','W','B','W','B','W','B'],
    ['B','W','B','W','B','W','B','W'],
    ['W','B','W','B','W','B','W','B'],
    ['B','W','B','W','B','W','B','W']
]

target2 = [
    ['B','W','B','W','B','W','B','W'],
    ['W','B','W','B','W','B','W','B'],
    ['B','W','B','W','B','W','B','W'],
    ['W','B','W','B','W','B','W','B'],
    ['B','W','B','W','B','W','B','W'],
    ['W','B','W','B','W','B','W','B'],
    ['B','W','B','W','B','W','B','W'],
    ['W','B','W','B','W','B','W','B']
]

def countDifferIdx(lst1, lst2):
    cnt = 0
    for i in range(8):
        for j in range(8):
            if lst1[i][j] != lst2[i][j]:
                cnt+=1
    return cnt

def detectNotChessGrid(row, column, grid):
    m = 0
    for r in range(row):
        if r+8 == row:
            break
        temp = grid[r:r+8]
        for c in range(column):
            if c+8 == column:
                break
            for t in temp:
                t = t[c:c+8]
            m = min(countDifferIdx(temp, target1), countDifferIdx(temp, target2))
    return m

for i in range(row):
    grid[i] = list(input())
print(detectNotChessGrid(row, column, grid))