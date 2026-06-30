## Theory: Sum and Difference → Two Unknowns

Given the **sum** and **difference** of two numbers, you can find both:

$$L + W = S \quad \text{and} \quad L - W = D$$

**Add the equations:** $(L+W) + (L-W) = S+D \Rightarrow 2L = S+D \Rightarrow L = \frac{S+D}{2}$

**Subtract the equations:** $(L+W) - (L-W) = S-D \Rightarrow 2W = S-D \Rightarrow W = \frac{S-D}{2}$

```python
S = int(input())
D = int(input())
L = (S + D) // 2
W = (S - D) // 2
print(L * W)
```

**Example:** S=10, D=2 → L=(10+2)//2=6, W=(10-2)//2=4, Area=24.

**Why `//`?** The problem guarantees S and D have the same parity (both even or both odd), so S+D and S−D are always even — `//` gives a clean integer result.

**Classic technique:** Sum+Difference equations appear in age problems, speed problems, and economics. Mastering this unlocks a whole family of word problems!
