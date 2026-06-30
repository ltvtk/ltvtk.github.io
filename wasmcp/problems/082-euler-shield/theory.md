## Theory: Euler's Totient via Prime Factorization

For each distinct prime p dividing N, multiply the result by (p-1)/p.

```python
n = int(input())
result = n
temp = n
d = 2
while d * d <= temp:
    if temp % d == 0:
        while temp % d == 0:
            temp //= d
        result -= result // d
    d += 1
if temp > 1:
    result -= result // temp
print(result)
```

**Formula:** φ(N) = N × ∏(1 - 1/p) for all distinct prime factors p of N.

For N = 12 = 2² × 3:
- Multiply by (1 - 1/2): 12 × 1/2 = 6
- Multiply by (1 - 1/3): 6 × 2/3 = 4
- φ(12) = 4 ✓

**Special case:** φ(1) = 1 (GCD(1,1) = 1, so 1 counts).
**For prime p:** φ(p) = p - 1 (all numbers 1 to p-1 are coprime with p).

Using integer arithmetic: `result -= result // d` is equivalent to multiplying by (d-1)/d.
