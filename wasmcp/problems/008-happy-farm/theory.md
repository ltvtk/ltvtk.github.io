## Theory: Assumption Method (Jiǎ Shè Fǎ)

This is a classic Chinese elementary math technique called the **Assumption Method**:

1. **Assume** all $M$ animals are chickens → expected legs = $2M$.
2. **Difference**: actual legs $N$ exceeds $2M$ by $(N - 2M)$ legs.
3. Each dog has 2 extra legs compared to a chicken. So dogs = $(N - 2M) \div 2$.
4. Chickens = $M$ − dogs.

```python
M = int(input())
N = int(input())
dogs     = (N - M * 2) // 2
chickens = M - dogs
print(chickens, dogs)
```

**System of equations view** (for the curious):

$$c + d = M$$
$$2c + 4d = N$$

Multiply the first by 2 and subtract: $2d = N - 2M$, so $d = \frac{N-2M}{2}$.

Both methods give the same answer — the assumption trick is just a mental shortcut.
