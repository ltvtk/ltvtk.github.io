## Theory: Trial Division up to √N

Check divisors from 2 to √N. If none divide N evenly, N is prime.

```python
import math
n = int(input())
if n < 2:
    print("No")
else:
    prime = True
    i = 2
    while i * i <= n:
        if n % i == 0:
            prime = False
            break
        i += 1
    print("Yes" if prime else "No")
```

**Key facts:**
- N < 2: not prime by definition (1 is not prime).
- N = 2: the only even prime.
- If N has a divisor d where d ≤ √N, then N/d ≥ √N is the other factor.
- Checking up to √N is sufficient: O(√N) time vs O(N) naive.
- For N = 10⁶, √N = 1000 — only 1000 checks instead of 1,000,000!
