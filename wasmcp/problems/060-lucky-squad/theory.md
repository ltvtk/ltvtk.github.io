## Theory: Multi-Branch Modulo Classification

Use modulo 6 to find the position in a 6-step cycle, then map to a team.

```python
k = int(input())
r = k % 6
if r == 1:
    print("Red")
elif r == 2 or r == 4:
    print("Blue")
elif r == 3:
    print("Yellow")
elif r == 5:
    print("Purple")
else:
    print("Orange")
```

**Key facts:**
- `k % 6` has exactly 6 possible values: 0, 1, 2, 3, 4, 5.
- Two values (2 and 4) map to the same team — use `or` to combine them.
- `else` catches the only remaining case: remainder 0 → Orange.
- This is called a **lookup by remainder** — a powerful pattern for cyclic assignments.
- Works for any K, even K=1,000,000, because `%` is instant.
