## Theory: Quotient and Remainder

Integer division `//` gives the quotient; `%` gives the remainder.

```python
n = int(input())
m = int(input())
print(n // m, n % m)
```

**Key facts:**
- `n // m` = number of complete groups (full boxes). This is **integer division** (floor division).
- `n % m` = leftover items that don't fill a complete group.
- Together they satisfy: `n == (n // m) * m + (n % m)`.
- Example: 35 // 8 = 4 (four full boxes), 35 % 8 = 3 (three clocks left over).
- `print(a, b)` outputs two values separated by a space — perfect for this two-number answer.
