tc = int(input())

for i in range(tc):
  student = int(input())
  seats = list(map(int, input().split()))
  
  total_seats_needto_swap = 0
  
  for k in range(len(seats)):
    # print(i, seats[k], k)
    if seats[k] == k + 1:

      total_seats_needto_swap += 1

 
  print(round( total_seats_needto_swap/2))