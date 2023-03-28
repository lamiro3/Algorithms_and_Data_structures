#에라토스테네스의 체 -> 메모리 초과 (해결)
#밀러-라빈 -> 2%에서 시간 초과

from random import randint

primes = []

def MillerRabin(a, s, d, n):
  t = pow(a, d, n) # a^d mod n을 의미

  for r in range(s):
    if t != 1:
      if pow(a, (2**r)*d, n) != n-1:
        return False
      
  return True

def isPrime(N, k): # k는 테스트 횟수
  if N == 2:
    return True
  
  result = False

  s, d = 0, N-1
  while not d % 2:
    d = d//2
    s += 1

  for _ in range(k):
    a = randint(1, N-1)

    if MillerRabin(a, s, d, N):
      result = True
  
  return result

N = int(input())

for _ in range(N):
  A, B = tuple(map(int, input().split()))
  SUM = A+B

  if SUM<4:
      print("NO")
  elif SUM%2 == 0:
      isOK = False
      for i in range(2, SUM//2+1):
        if isPrime(i, 10) and isPrime(SUM-i, 10):
          isOK = True
        else:
          isOK = False
          break
      if not isOK:
        print("NO")
      else:
        print("YES")
  else:
      if isPrime(SUM-2, 30):
          print("YES")
      else:
          print("NO")