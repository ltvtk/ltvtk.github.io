## Theory: Working Backwards

When you know the **end result** of a series of operations, reverse each step to find the start.

**Forward operation:** `basket → basket - (basket // 2 + 1)`  
= removes half + 1 egg.

**Reverse operation:** `previous = (current + 1) × 2`  
= undo by adding 1 back, then doubling.

```python
X = int(input())
before3 = (X + 1) * 2
before2 = (before3 + 1) * 2
start   = (before2 + 1) * 2
print(start)
```

**Trace for X=0:**

| Step | Value |
|---|---|
| X (after C3) | 0 |
| before C3 | (0+1)×2 = 2 |
| before C2 | (2+1)×2 = 6 |
| before C1 (start) | (6+1)×2 = **14** |

**Verify forward:** 14→(7+1=8 taken)→6→(3+1=4 taken)→2→(1+1=2 taken)→0 ✓

**"Working backwards" (reverse thinking)** is a powerful strategy for math olympiad problems. When a sequence of operations leads to a known result, reverse each step to recover the original value.
