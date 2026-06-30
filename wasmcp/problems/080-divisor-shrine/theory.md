## Theory: Count Divisors in O(√N)

Check each d from 1 to √N. If d divides N, count both d and N/d (if they differ).

```python
n = int(input())
count = 0
d = 1
while d * d <= n:
    if n % d == 0:
        count += 1
        if d != n // d:
            count += 1
    d += 1
print(count)
```

**Key idea:** Divisors come in pairs (d, N/d). We only need to check one from each pair — the smaller one is ≤ √N.

- If d = √N exactly (perfect square), it's its own pair — count only once.
- Time: O(√N) — much faster than checking all 1 to N.

**From prime factorization:** If N = p₁^a₁ × p₂^a₂ × …, then divisor count = (a₁+1)(a₂+1)…
For N = 36 = 2² × 3²: count = (2+1)(2+1) = 9. ✓
