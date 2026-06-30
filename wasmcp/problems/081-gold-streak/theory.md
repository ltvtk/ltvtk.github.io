## Theory: Kadane's Algorithm

Track the current streak sum and the global best. Reset the streak if it drops below 0.

```python
n = int(input())
a = list(map(int, input().split()))
best = a[0]
curr = a[0]
for i in range(1, n):
    curr = max(a[i], curr + a[i])
    best = max(best, curr)
print(best)
```

**Key insight:** `max(a[i], curr + a[i])` decides: "Is it better to start a new streak at a[i], or extend the existing streak?"

- If curr < 0 before seeing a[i], extending would only hurt: curr + a[i] < a[i]. So restart.
- If curr ≥ 0, extending is at least as good: curr + a[i] ≥ a[i]. So keep extending.

**All negatives:** If all elements are negative, the max subarray is the single least-negative element. Starting `best = a[0]` (not 0) handles this.

Time: O(N) — one pass, constant extra space.
