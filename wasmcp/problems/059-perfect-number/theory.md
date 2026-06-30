## Theory: Finding Proper Divisors

Loop from 1 to N-1 and sum the ones that divide N evenly.

```python
n = int(input())
s = sum(i for i in range(1, n) if n % i == 0)
if s == n:
    print("Perfect")
else:
    print("Not Perfect")
```

**Key facts:**
- A proper divisor of N is any positive integer less than N that divides N with no remainder.
- `n % i == 0` means i divides N evenly — i is a proper divisor.
- Sum all such divisors and compare to N. If equal → Perfect Number.
- Only 4 perfect numbers exist below 10,000: 6, 28, 496, and 8128.
- N=1 has no proper divisors, so its sum is 0 ≠ 1 → Not Perfect.
