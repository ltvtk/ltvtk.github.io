## Theory: Constant Age Difference

**The golden rule of age problems:** the *difference* between two people's ages never changes.

Let $D = B - A$ (the constant age gap).

When Dad is twice Son's age:
- Son's age that day = $D$ (equal to the age gap!)
- Because: if Son is $D$, Dad is $D + D = 2D$ = exactly twice.

**Years to wait** = Son's future age − Son's current age = $D - A = (B-A) - A = B - 2A$

```python
A = int(input())
B = int(input())
print(B - 2 * A)
```

**Example A=10, B=35:**
- Gap = 35−10 = 25
- Son will be 25 when Dad is double → wait 25−10 = **15 years** ✓
- Check: Son=25, Dad=50=2×25 ✓

**Algebraic check:** $B + Y = 2(A + Y) \implies B - 2A = Y$ — same answer!

**Insight:** The age gap is the *invariant* (thing that never changes). Recognizing invariants is one of the most powerful tools in olympiad mathematics.
