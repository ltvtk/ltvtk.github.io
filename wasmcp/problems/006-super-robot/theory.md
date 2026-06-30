## Theory: Linear Equations

Let $n$ = number of kids and $R$ = robot price.

From the two conditions:
$$n \times A + B = R \quad \text{(short)}$$
$$n \times C - D = R \quad \text{(surplus)}$$

Setting them equal:
$$n \times A + B = n \times C - D$$
$$B + D = n \times (C - A)$$
$$n = \frac{B + D}{C - A}$$

Then: $R = n \times A + B$

```python
A, B, C, D = int(input()), int(input()), int(input()), int(input())
n = (B + D) // (C - A)
print(n, n * A + B)
```

**Key insight:** When two linear equations share the same unknown, subtract one from the other to eliminate the unknown on one side — a classic technique called *elimination*.
