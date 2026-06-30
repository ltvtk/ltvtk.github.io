## Theory: The Euclidean Algorithm

Find the GCD by repeatedly replacing (a, b) with (b, a mod b) until b = 0.

```python
a = int(input())
b = int(input())
while b:
    a, b = b, a % b
print(a)
```

**Key facts:**
- GCD(a, b) = GCD(b, a mod b). This is Euclid's rule — the GCD doesn't change.
- When b becomes 0, the GCD is the current value of a.
- Example: GCD(12, 18) → GCD(18, 12) → GCD(12, 6) → GCD(6, 0) → answer is 6.
- `while b:` runs as long as b is not 0.
- `a, b = b, a % b` swaps and reduces in one line.
- The algorithm is very fast — it takes at most log(min(a,b)) steps.
