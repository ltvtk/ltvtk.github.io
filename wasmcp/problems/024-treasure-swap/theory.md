## Theory: Setting Up and Solving Two Equations

Let $G$ = gold weight, $S$ = silver weight.

**Equation 1** (equal piles): $9G = 11S$

**Equation 2** (swap loss): replacing one gold with one silver reduces weight by $X$:
$$G - S = X$$

**Solve:** From eq. 2: $G = S + X$. Substitute into eq. 1:
$$9(S + X) = 11S \implies 9S + 9X = 11S \implies 2S = 9X \implies S = \frac{9X}{2}$$
$$G = S + X = \frac{9X}{2} + X = \frac{11X}{2}$$

```python
X = int(input())
silver = 9 * X / 2
gold   = silver + X
print(gold, silver)
```

**Example X=13:**
- silver = 9×13/2 = 58.5
- gold   = 58.5 + 13 = 71.5
- Check: 9×71.5=643.5 = 11×58.5=643.5 ✓

**The assumption method:** Temporarily assume a "unit" value, compute the constraint violation, then scale. Here we used algebra — the more general form of the same idea.

**Why do answers end in .5?** When X is odd, 9X is odd, so 9X/2 is a half-integer. This is expected — the problem is designed to give tidy decimal answers.
