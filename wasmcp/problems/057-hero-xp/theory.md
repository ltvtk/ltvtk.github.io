## Theory: Sum of Squares

Accumulate i² for each i from 1 to N.

```python
n = int(input())
total = 0
for i in range(1, n + 1):
    total += i * i
print(total)
```

**Key facts:**
- `i * i` computes i squared. You can also write `i ** 2`.
- Start `total = 0` before the loop and add each term inside.
- The closed-form formula is N(N+1)(2N+1)/6, but a loop is easier to understand.
- For N=100: total = 338,350 — well within Python's integer range.
- This pattern (accumulate a function of i) works for any formula: sum of cubes, sum of evens, etc.
