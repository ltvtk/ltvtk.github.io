## Theory: Grid DP

dp[i][j] = number of ways to reach cell (i,j).

```python
n, m = map(int, input().split())
dp = [[0] * (m + 1) for _ in range(n + 1)]
dp[1][1] = 1
for i in range(1, n + 1):
    for j in range(1, m + 1):
        if i == 1 and j == 1:
            continue
        dp[i][j] = dp[i - 1][j] + dp[i][j - 1]
print(dp[n][m])
```

**Base cases:**
- dp[1][j] = 1 for all j (only one way: go right along row 1).
- dp[i][1] = 1 for all i (only one way: go down along column 1).

**Transition:** dp[i][j] = paths from above + paths from left.

**Math formula:** The answer is C(N+M-2, N-1) = (N+M-2)! / ((N-1)! × (M-1)!).
For a 3×3 grid: C(4,2) = 6 ✓

Each path is a sequence of (N-1) downs and (M-1) rights — choose which (N-1) of the (N+M-2) steps are "down."
