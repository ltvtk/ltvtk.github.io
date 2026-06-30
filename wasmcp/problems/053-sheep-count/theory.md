## Theory: The for Loop with range()

Use a `for` loop to repeat an action for each number from 1 to N.

```python
n = int(input())
for i in range(1, n + 1):
    print("Sheep", i)
```

**Key facts:**
- `range(1, n+1)` generates numbers 1, 2, 3, ..., N. The end value is **excluded**, so use `n+1`.
- `range(1, 4)` gives 1, 2, 3 — not 4!
- `print("Sheep", i)` prints the word "Sheep" then a space then the value of `i`.
- The loop body runs once per value of `i`, in order.
- This is the most common loop pattern: repeat N times, doing something different each time.
