## Theory: Greedy — Sort and Pick Lightest First

Sort feathers by weight ascending. Take them in order until the total would exceed T.

```python
n, t = map(int, input().split())
w = list(map(int, input().split()))
w.sort()
total = 0
count = 0
for wi in w:
    if total + wi <= t:
        total += wi
        count += 1
    else:
        break
print(count)
```

**Why greedy works here:** We want to maximize the COUNT of items, not their total value. So always picking the lightest available item is optimal — no heavier item can ever be a better choice than a lighter one when the goal is quantity.

**Proof:** If we skip a lighter item and pick a heavier one instead, we use more weight budget for the same count of 1 item. We can always swap them to do at least as well.
