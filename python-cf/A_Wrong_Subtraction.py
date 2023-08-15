inp = list(map(int, input().strip().split()))

tc = inp[1]
first = inp[0]

for _ in range(tc):
  # print(first)
  if str(first)[len(str(first)) - 1] == '0':
    first = int(first / 10)
  else:
    first = first - 1
  
print(int(first))