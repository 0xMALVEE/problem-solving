n = input().strip()

result = False
for item in n:
  if(item == "4" or item == "7"):
    result = True
  else:

    result = False
    break

if(result ):
  print("YES")
else:
  print("NO")