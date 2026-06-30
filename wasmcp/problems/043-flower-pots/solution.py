# input pattern: two integers on separate lines (N seedlings, M per pot)
n = int(input())
m = int(input())
r = n % m
if r == 0:
    print(0)
else:
    print(m - r)
