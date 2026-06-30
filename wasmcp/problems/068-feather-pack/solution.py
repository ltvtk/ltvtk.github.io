# input pattern: N on line 1, T on line 2, then N weights each on own line
n = int(input())
t = int(input())
w = [int(input()) for _ in range(n)]
w.sort()
total = 0
count = 0
for wi in w:
    if total + wi <= t:
        total += wi
        count += 1
    else:
        break
print(count)
