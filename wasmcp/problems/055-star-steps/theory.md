## Theory: String Multiplication and Pattern Loops

Multiply a string by an integer to repeat it. Use a loop to vary the count.

```python
n = int(input())
for i in range(1, n + 1):
    print("*" * i)
```

**Key facts:**
- `"*" * 3` produces `"***"` — Python multiplies strings by repeating them.
- `"*" * i` produces a string of exactly `i` stars.
- The loop variable `i` goes from 1 to N, so each row is longer than the last.
- `print("*" * i)` is equivalent to printing `i` stars followed by a newline.
- String repetition works for any character: `"-" * 10` gives `"----------"`.
