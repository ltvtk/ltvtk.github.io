## Theory: Loops for Multiplication Tables

Use a `for` loop from 1 to 10 to print each row of the table.

```python
k = int(input())
for i in range(1, 11):
    print(k, "x", i, "=", k * i)
```

**Key facts:**
- `range(1, 11)` gives 1, 2, 3, ..., 10 (11 is excluded).
- `print(k, "x", i, "=", k * i)` outputs all 5 parts separated by spaces: `5 x 3 = 15`.
- `k * i` is computed fresh each time the loop runs with a new value of `i`.
- The loop variable `i` is the multiplier; `k` stays fixed throughout.
- This pattern (fixed value × changing counter) appears in many problems: counting money, scoring, scaling.
