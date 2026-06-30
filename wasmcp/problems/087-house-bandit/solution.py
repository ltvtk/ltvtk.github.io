# input pattern: N on line 1, then N gold values each on own line
n = int(input())
g = [int(input()) for _ in range(n)]
if n == 1:
    print(g[0])
else:
    prev2 = g[0]
    prev1 = max(g[0], g[1])
    for i in range(2, n):
        curr = max(prev1, prev2 + g[i])
        prev2 = prev1
        prev1 = curr
    print(prev1)
