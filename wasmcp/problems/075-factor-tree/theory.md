## Theory: Trial Division Factorization

Divide by each prime starting from 2, collecting all factors.

```python
n = int(input())
factors = []
d = 2
while d * d <= n:
    while n % d == 0:
        factors.append(d)
        n //= d
    d += 1
if n > 1:
    factors.append(n)
print(*factors)
```

**How it works:**
- Try dividing by 2, 3, 4, 5, … up to √N.
- If d divides N, collect it and keep dividing (handles repeated factors).
- After the loop, if N > 1, N itself is a prime factor.
- Factors come out in ascending order automatically.
- Time: O(√N).

**Fundamental Theorem of Arithmetic:** Every integer > 1 has a unique prime factorization. The output is always the same regardless of the order you find factors.
