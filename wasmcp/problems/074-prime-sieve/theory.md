## Theory: Sieve of Eratosthenes

Mark all multiples of each prime as composite. Remaining unmarked numbers are prime.

```python
n = int(input())
if n < 2:
    print(0)
else:
    sieve = [True] * (n + 1)
    sieve[0] = sieve[1] = False
    i = 2
    while i * i <= n:
        if sieve[i]:
            j = i * i
            while j <= n:
                sieve[j] = False
                j += i
        i += 1
    print(sum(sieve))
```

**Key ideas:**
- Start marking from i² (smaller multiples are already marked by earlier primes).
- Only need to sieve up to √N — any composite ≤ N has a prime factor ≤ √N.
- Time: O(N log log N) — nearly linear, much faster than checking each number individually.
- Space: O(N) for the boolean array.

For N = 10⁶ this takes about 10⁷ operations — very fast!
