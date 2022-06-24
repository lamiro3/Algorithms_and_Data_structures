x,y,w,h = map(int, input().split())
nums = [x, y, w-x, h-y]
print(min(nums))