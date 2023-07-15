st = input().split('.')
if st[1] >= '0' and st[1] <= '2':
  print(st[0]+'-')
elif st[1] >= '3' and st[1] <= '6':
  print(st[0])
else:
  print(st[0]+'+')