import sys
input = sys.stdin.readline

N = int(input())
Deque = []

COMMAND_LST = {
    'push_front': 0,
    'push_back': 1,
    'pop_front': 2,
    'pop_back': 3,
    'size': 4,
    'empty': 5,
    'front': 6,
    'back': 7
}

for _ in range(N):
  cmd = list(input().split())
  code, optn = 0, 0
  if len(cmd) >1:
    code = COMMAND_LST[cmd[0]]
    optn = cmd[1]
  else:
    code = COMMAND_LST[cmd[0]]
  
  if code == 0:
    Deque.insert(0, optn)
  elif code == 1:
    Deque.append(optn)
  elif code == 2:
    if len(Deque) == 0:
      print(-1)
    else:
      print(Deque[0])
      del Deque[0]
  elif code == 3:
    if len(Deque) == 0:
      print(-1)
    else:
      print(Deque[-1])
      del Deque[-1]
  elif code == 4:
    print(len(Deque))
  elif code == 5:
    if len(Deque) == 0:
      print(1)
    else:
      print(0)
  elif code == 6:
    if len(Deque) == 0:
      print(-1)
    else:
      print(Deque[0])
  elif code == 7:
    if len(Deque) == 0:
      print(-1)
    else:
      print(Deque[-1])