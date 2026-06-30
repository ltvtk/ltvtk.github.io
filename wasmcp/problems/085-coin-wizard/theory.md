## Theory: DP Coin Change (Unbounded Knapsack)

Build dp[i] = minimum coins to reach sum i. Initialize dp[0]=0, all others = infinity.

```python
n, x = map(int, input().split())
c = list(map(int, input().split()))
INF = float('inf')
dp = [INF] * (x + 1)
dp[0] = 0
for i in range(1, x + 1):
    for ci in c:
        if ci <= i and dp[i - ci] + 1 < dp[i]:
            dp[i] = dp[i - ci] + 1
print(dp[x] if dp[x] != INF else -1)
```

**Key insight:** dp[i] = min over all coins c: dp[i - c] + 1.
- We try every coin to see if using it leads to a better solution.
- Each subproblem dp[i] depends only on smaller subproblems → build bottom-up.
- Unlike greedy, DP considers ALL combinations.

**Why greedy fails:** With coins {1,5,7} and target 11: greedy picks 7 first (leaving 4 → 4 ones = 5 total). DP correctly finds 5+5+1 = 3.

This is the **unbounded knapsack** variant — each coin can be used any number of times.
