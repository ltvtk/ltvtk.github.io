## Theory: LIS with O(N²) DP

dp[i] = length of LIS ending at position i. Answer = max of all dp[i].

```python
n = int(input())
a = list(map(int, input().split()))
dp = [1] * n
for i in range(1, n):
    for j in range(i):
        if a[j] < a[i] and dp[j] + 1 > dp[i]:
            dp[i] = dp[j] + 1
print(max(dp))
```

**Explanation:**
- dp[i] starts at 1 (every element alone is an LIS of length 1).
- For each i, look back at all j < i. If a[j] < a[i], we can extend the LIS ending at j.
- Update dp[i] to be the best (longest) such extension.
- Final answer: max(dp).

**Time: O(N²)** — for N = 1000, about 10⁶ operations. Fast enough.

**O(N log N) solution exists** using binary search + patience sorting, but O(N²) DP is simpler to understand and sufficient for this constraint.
