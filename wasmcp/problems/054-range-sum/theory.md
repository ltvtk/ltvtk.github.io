## Theory: Accumulating a Sum with a Loop

Use a running total variable and add each number in the range.

```python
a = int(input())
b = int(input())
total = 0
for i in range(a, b + 1):
    total += i
print(total)
```

**Key facts:**
- Start `total = 0` before the loop — this is called the **accumulator** pattern.
- `range(a, b+1)` includes both `a` and `b` (remember: the end is excluded).
- `total += i` is short for `total = total + i`.
- After the loop, `total` holds the sum of all integers from A to B.
- Shortcut formula: Sum = (A + B) × (B - A + 1) / 2, but the loop approach always works!
