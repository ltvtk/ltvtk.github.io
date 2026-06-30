## Theory: Digit Counting by Range

Pages group naturally by their number of digits:

| Range | Count | Digits each | Total |
|---|---|---|---|
| 1 – 9 | 9 | 1 | 9 |
| 10 – 99 | 90 | 2 | 180 |
| 100 – 999 | 900 | 3 | 2700 |

Walk through each range, add up, stop when you reach N:

```python
N = int(input())
total = 0
digits, start = 1, 1
while start <= N:
    end = min(N, start * 10 - 1)
    total += (end - start + 1) * digits
    start *= 10
    digits += 1
print(total)
```

**Trace for N=12:**
- digits=1, start=1, end=min(12,9)=9 → total += 9×1 = 9
- digits=2, start=10, end=min(12,99)=12 → total += 3×2 = 6
- start=100 > 12 → stop
- Print 15 ✓

**Why not loop 1 to N?** For large N (e.g., 100,000) that's 100,000 iterations. The range-counting approach uses only `log₁₀(N)` steps — e.g., just 5 steps for N=100,000. Faster code processes the same problem in far fewer operations.
