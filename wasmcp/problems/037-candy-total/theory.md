## Theory: Reading Two Integers and Adding Them

Read each integer on its own line using `int(input())`, then add them.

```python
a = int(input())
b = int(input())
print(a + b)
```

**Key facts:**
- `input()` always returns a **string**. Use `int()` to convert it to a number for arithmetic.
- `a + b` works for very large numbers in Python — there is no overflow.
- Two separate `input()` calls read two separate lines.
- `print(a + b)` computes the sum first, then prints the result.
- This pattern (read → compute → print) is the foundation of almost every program.
