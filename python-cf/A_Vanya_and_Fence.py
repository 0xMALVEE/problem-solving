i1 = list(map(int, input().strip().split()))
i2 = list(map(int,input().strip().split()))

h = i1[1]

max_width = 0


for fh in i2:
  if(fh > h):
    max_width += 2
  else:
    max_width += 1
print(max_width)