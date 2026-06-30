## Theory: Reading Input

`input()` reads one line from the user as a **string**.

To read an integer, wrap it with `int()`:

```python
N = int(input())
print(N)
```

**Why `int()`?** Without it, `input()` returns `"2026"` (a string), not `2026` (a number). For arithmetic you need the number form; for just printing either works, but using `int()` is good habit.
