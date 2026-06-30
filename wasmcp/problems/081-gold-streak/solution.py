# input pattern: N on line 1, then N integers each on own line
n = int(input())
a = [int(input()) for _ in range(n)]
best = a[0]
curr = a[0]
for i in range(1, n):
    curr = max(a[i], curr + a[i])
    best = max(best, curr)
print(best)
