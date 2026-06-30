## Theory: Primality Testing with a Loop

Check every number from 2 to N-1 to see if it divides N evenly.

```python
n = int(input())
if n < 2:
    print("NO")
else:
    is_prime = True
    for i in range(2, n):
        if n % i == 0:
            is_prime = False
            break
    print("YES" if is_prime else "NO")
```

**Key facts:**
- Numbers less than 2 (0 and 1) are never prime.
- If any i in range(2, n) divides N, then N is composite (not prime) — stop early with `break`.
- `break` exits the loop immediately when a divisor is found.
- For N ≤ 1000, checking up to N-1 is fast enough.
- Optimization tip: you only need to check up to √N (since if d×e=N and d≤√N, you find d first).
