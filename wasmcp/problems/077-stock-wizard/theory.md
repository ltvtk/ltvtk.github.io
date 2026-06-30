## Theory: Track Minimum Price

Scan left to right. Keep the minimum price seen so far. At each day, update max profit if selling today is better.

```python
n = int(input())
p = list(map(int, input().split()))
min_price = p[0]
max_profit = 0
for i in range(1, n):
    max_profit = max(max_profit, p[i] - min_price)
    min_price = min(min_price, p[i])
print(max_profit)
```

**Why it works:**
- At each day i, the best profit if we sell on day i = p[i] - min(p[0..i-1]).
- We track min_price as we scan, so we never need to look back.
- If prices only fall (e.g., 5 4 3 2 1), min_price ≥ p[i] for all later days → profit is always ≤ 0 → output 0.
- Time: O(N) — one pass, constant extra space.
