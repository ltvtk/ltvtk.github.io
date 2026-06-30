## Theory: Gauss's Pairing Trick

Pair the **first** and **last**, **second** and **second-to-last**, etc.:

$$1 + N = N+1$$
$$2 + (N-1) = N+1$$
$$\vdots$$

Each pair sums to $N+1$. There are $N/2$ such pairs. So:

$$\text{sum} = \frac{N+1}{1} \times \frac{N}{2} = \frac{N(N+1)}{2}$$

```python
N = int(input())
print(N * (N + 1) // 2)
```

**Why `//`?** One of $N$ or $N+1$ is always even (consecutive integers), so $N(N+1)$ is always divisible by 2 — `//` gives a clean integer.

**Examples:**
- N=100: 100×101//2 = **5050** ✓
- N=1,000,000: 1000000×1000001//2 = **500000500000** ✓

**Historical note:** Carl Friedrich Gauss (1777–1855) supposedly solved this in seconds as an 8-year-old schoolboy. This formula is now called the **triangular number formula** because $1+2+\cdots+N$ counts the dots in a triangular arrangement.

**Loop vs formula:** A loop takes N steps; the formula takes **1 step**. For N=1,000,000 that's a million times faster!
