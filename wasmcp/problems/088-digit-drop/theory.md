## Theory: DP on Number — Removing Digits

Build dp array where dp[i] = minimum steps to reach 0 from i.

```python
n = int(input())
dp = [0] * (n + 1)
for i in range(1, n + 1):
    dp[i] = float('inf')
    temp = i
    while temp > 0:
        d = temp % 10
        if d > 0:
            dp[i] = min(dp[i], dp[i - d] + 1)
        temp //= 10
print(dp[n])
```

**How it works:**
- dp[0] = 0 (already at 0, no steps needed).
- For each number i: try subtracting each non-zero digit d of i.
- dp[i] = 1 + best of dp[i - d] for all digits d of i.

**Key insight:** We build up from small values to large. When computing dp[i], all dp[i-d] have already been computed (since d ≥ 1).

This is different from greedy! Sometimes subtracting a smaller digit leads to a better result overall because it leaves a more favorable number.
