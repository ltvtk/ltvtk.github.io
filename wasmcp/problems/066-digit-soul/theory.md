## Theory: Digital Root

Repeatedly sum the digits of N until a single digit remains.

```python
n = int(input())
while n >= 10:
    s = 0
    while n > 0:
        s += n % 10
        n //= 10
    n = s
print(n)
```

**Math shortcut (optional):** For N > 0, the digital root equals `1 + (N - 1) % 9`.
- This works because the digit sum has the same remainder mod 9 as the original number.
- Exception: N = 0 → digital root = 0.

**Loop approach:**
- Each step reduces N to at most its number of digits (≤ 10 for N ≤ 10⁹).
- Converges very quickly — at most 2-3 iterations for any input.
