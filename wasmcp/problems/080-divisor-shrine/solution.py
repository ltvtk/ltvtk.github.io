# input pattern: single integer N
n = int(input())
count = 0
d = 1
while d * d <= n:
    if n % d == 0:
        count += 1
        if d != n // d:
            count += 1
    d += 1
print(count)
