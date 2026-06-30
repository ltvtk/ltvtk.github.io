# input pattern: N on line 1, then N binary digits (0 or 1) each on own line
n = int(input())
result = 0
for _ in range(n):
    bit = int(input())
    result = result * 2 + bit
print(result)
