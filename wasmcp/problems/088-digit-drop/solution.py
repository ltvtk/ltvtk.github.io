# input pattern: single integer N
n = int(input())
dp = [0] * (n + 1)
for i in range(1, n + 1):
    dp[i] = float('inf')
    temp = i
    while temp > 0:
        d = temp % 10
        if d > 0:
            if dp[i - d] + 1 < dp[i]:
                dp[i] = dp[i - d] + 1
        temp //= 10
print(dp[n])
