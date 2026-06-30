## Theory: Working Backwards

The key technique is **reverse reasoning** — start from what you *know* (the end result) and undo each step to find what you *don't know* (the start).

**Forward:** Original → Pirate 1 takes $\frac{1}{A}$ → Pirate 2 takes $\frac{1}{B}$ of rest → $C$ left.

**Backward:**
1. Before Pirate 2: If $\frac{B-1}{B}$ of something equals $C$, then that something equals $C \times \frac{B}{B-1}$.
2. Before Pirate 1: If $\frac{A-1}{A}$ of something equals the result above, work back the same way.

```python
A = int(input())
B = int(input())
C = int(input())

before_gap_tooth = (C // (B - 1)) * B
original         = (before_gap_tooth // (A - 1)) * A
print(original)
```

**Why `//` instead of `/`?** The problem guarantees integer answers — using `//` avoids floating-point rounding errors. Always prefer integer arithmetic in CP when the answer is guaranteed whole.
