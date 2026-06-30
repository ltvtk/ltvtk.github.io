## Theory: House Robber DP

dp[i] = maximum gold from the first i houses.
dp[i] = max(dp[i-1], dp[i-2] + g[i])

```python
n = int(input())
g = list(map(int, input().split()))
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
```

**Two choices at house i:**
1. Skip house i → keep the max from first i-1 houses: dp[i-1].
2. Rob house i → can't have robbed house i-1: dp[i-2] + g[i].

Take the max of both choices.

**Base cases:**
- dp[1] = g[1] (one house, just take it).
- dp[2] = max(g[1], g[2]) (two houses, take the bigger one).

This is a classic DP problem — the "skip or take" pattern appears in many variants.
