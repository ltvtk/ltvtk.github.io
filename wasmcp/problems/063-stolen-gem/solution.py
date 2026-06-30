# input pattern: N on line 1, then N-1 integers each on own line
n = int(input())
total = 0
for _ in range(n - 1):
    total += int(input())
print(n * (n + 1) // 2 - total)
