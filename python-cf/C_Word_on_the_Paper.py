tc = int(input())

for i in range(tc):  
  result = ''
  for k in range(8):
    line = input()
    for j in range(8):
      if line[j] != ".":
        result += line[j]
  print(result)