N = int(input())
NUMS = list(map(int, input().split(' ')))
NUMS.sort()

RESULT = NUMS[0]*NUMS[-1]
print(RESULT)