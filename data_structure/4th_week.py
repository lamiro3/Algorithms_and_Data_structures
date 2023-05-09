#[P4.3]

class Stack:
  def __init__(self):
    self.top = []

  def isEmpty(self): return len(self.top) == 0

  def size(self): return len(self.top)

  def clear(self): self.top = []

  def push(self, item):
    self.top.append(item)

  def pop(self):
    if not self.isEmpty():
      return self.top.pop(-1)

  def peek(self):
    if not self.isEmpty():
      return self.top[-1]

def checkBrackets(stmt, i):
  stack = Stack()
  for j, ch in enumerate(stmt):
    if ch in ('{', '[', '('):
      stack.push(ch)
    elif ch in ('}', ']', ')'):
      if stack.isEmpty():
        print("조건 2을 위반하셨습니다.")
        print(f'({i+1},{j+1})')
        return False # stack이 비었단 얘기는 더이상 닫히는 괄호의 짝이 없다는 얘기이므로 False 반환
      else: 
        left = stack.pop() 
        if (ch == "}" and left != "{") or (ch == "]" and left != "[") or (ch == ")" and left != "(") :
            print("조건 3을 위반하셨습니다.")
            print(f'({i+1},{j+1})')
            return False # 다른 괄호끼리 교차했을 때

  if not stack.isEmpty():
      print("조건 1을 위반하셨습니다.")
      print(f'({i+1},{j+1})')
      return stack.isEmpty()
  else:
      return True

def readFile(path):
    s=[]
    f = open(path, 'r')
    lines = f.readlines()
    for line in lines:
        if '\n' in line:
            line = line.replace('\n', '')
        s.append(line)
    return s

PATH = input("파일의 경로를 입력하시오(.py): ")
stmt = readFile(PATH)

for i, row in enumerate(stmt):
    if checkBrackets(row, i):
        if i == len(stmt) -1:
            print("0")
        else: continue
    else:
        break        