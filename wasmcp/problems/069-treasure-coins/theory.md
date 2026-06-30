## Theory: Greedy Coin Change

Use the largest coin possible at each step. This works for these specific denominations.

```python
coins = [500, 200, 100, 50, 20, 10]
b = int(input())
count = 0
for c in coins:
    count += b // c
    b %= c
print(count)
```

**Why greedy works here:** These denominations are "canonical" — each larger coin is always at least as efficient as using smaller coins to make the same amount. For example, one 50 is always better than two 20s + one 10 (3 coins vs 1 coin for 50).

**Important:** Greedy does NOT always work for arbitrary coin sets! For example with coins {1, 3, 4} and target 6: greedy picks 4+1+1=3 coins, but optimal is 3+3=2 coins. The DP solution in Level 6 handles this.
