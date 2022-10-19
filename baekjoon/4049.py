import sys
import numpy as np

input = sys.stdin.readline()
r,c = 1, 1

def set_mat(mat, r, c):
    for i in range(r):
      row = input()
      for j in range(c):
        mat[i][j] = int(row[j])

def get_sq_mat(mat, n):
  return mat[:n][:n]


def get_divisor(n):
    data = set()

    for i in range(1, int(n ** (1 / 2)) + 1):
        if n % i == 0:
            data.add(i)
            data.add(n // i)
    
    return list(sorted(data))

def isDivided(mat, t_mat, r, c, d):
  check = np.array(t_mat)
  for i in range(r-d):
    for j in  range(c-d):
    

def isMulmat(mat, divisors):
  for d in divisors:
    t_mat = get_sq_mat(mat, d)


def get_tensorNum():



while not(r==0 and c==0):
  r, c =  map(int, input().split())
  mat = [[0]*c for _ in range(r)]
  set_mat(mat, r, c)
