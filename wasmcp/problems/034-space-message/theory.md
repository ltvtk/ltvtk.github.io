## Theory: Joining Multiple Values with print()

Python's `print()` automatically places a space between multiple arguments.

```python
w1 = input()
w2 = input()
w3 = input()
print(w1, w2, w3)
```

**Key facts:**
- `print(a, b, c)` outputs `a b c` — one space between each value by default.
- This is called the **separator** behavior. The default separator is `sep=" "`.
- You can change the separator: `print(a, b, c, sep="-")` gives `a-b-c`.
- Reading 3 words from 3 separate lines takes 3 `input()` calls.
- No need to manually add spaces — `print()` handles it for you!
