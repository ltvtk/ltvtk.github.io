## Theory: Interval Scheduling — Sort by End Time

Greedy: sort by end time, then greedily pick the next non-overlapping interval.

```python
n = int(input())
acts = []
for _ in range(n):
    l, r = map(int, input().split())
    acts.append((r, l))
acts.sort()
count = 0
last_end = -1
for r, l in acts:
    if l > last_end:
        count += 1
        last_end = r
print(count)
```

**Why sort by end time?** Choosing the act that ends earliest leaves the most remaining time for future acts. This is the classic "Activity Selection" greedy proof:

- If we have an optimal solution, we can always replace its first activity with one that ends earliest without reducing the count.
- Repeat: we can always match the greedy choice without losing any activity.

**Intervals overlap** when one starts before the other ends: L₂ ≤ R₁.
**Non-overlapping**: L₂ > R₁ (strict).
