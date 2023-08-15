inp = [1,2,3,4,5,5,1,1,1,3,4]

store = { }

for i, item  in enumerate( inp):
  print(item)
  if inp[i] in store:
    store[inp[i]] += 1
  else: 
    store[inp[i]] = 1
    
print(store)