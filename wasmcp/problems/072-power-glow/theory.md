## Theory: Bit Trick for Powers of 2

A number N > 0 is a power of 2 if and only if N & (N-1) == 0.

```python
n = int(input())
print("Yes" if n > 0 and (n & (n - 1)) == 0 else "No")
```

**Why does N & (N-1) == 0 work?**
- A power of 2 in binary looks like: 1000…0 (exactly one 1-bit).
- N-1 in binary flips that one 1-bit and all trailing zeros: 0111…1.
- Their AND is zero.
- Any other number has at least two 1-bits, so N & (N-1) ≠ 0.

**Alternative loop approach:**
```python
n = int(input())
while n > 1 and n % 2 == 0:
    n //= 2
print("Yes" if n == 1 else "No")
```
