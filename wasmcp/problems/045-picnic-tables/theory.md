## Theory: Ceiling Division

To divide N items into groups of K, rounding UP, use `(N + K - 1) // K`.

```python
n = int(input())
tables = (n + 5) // 6   # ceiling division by 6
empty = tables * 6 - n
print(tables, empty)
```

**Key facts:**
- Regular division `n // 6` rounds **down** — that would miss the last incomplete table.
- Ceiling division `(n + 5) // 6` rounds **up** — always includes the last partial table.
- Why add 5? Because (n + k-1) // k rounds up for any k. Here k=6, so k-1=5.
- Empty seats = total capacity − actual students = `tables × 6 − n`.
- When N is exactly divisible by 6, empty = 0 (the last table is full too).
