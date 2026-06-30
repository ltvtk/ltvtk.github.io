# input pattern: N on line 1, X on line 2, then N coin values each on own line
n = int(input())
x = int(input())
c = [int(input()) for _ in range(n)]
INF = float('inf')
dp = [INF] * (x + 1)
dp[0] = 0
for i in range(1, x + 1):
    for ci in c:
        if ci <= i and dp[i - ci] + 1 < dp[i]:
            dp[i] = dp[i - ci] + 1
print(dp[x] if dp[x] != INF else -1)
