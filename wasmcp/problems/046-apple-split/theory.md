## Theory: Sharing with Division and Modulo

Divide apples equally using `//` and find leftover with `%`.

```python
n = int(input())
m = int(input())
print(n // m, n % m)
```

**Key facts:**
- `n // m` = how many each friend gets (integer division rounds down).
- `n % m` = the remainder — apples left over after equal sharing.
- If N < M, each friend gets 0 and all N apples are leftover.
- Check: `(n // m) * m + (n % m)` always equals N.
- This is exactly how you split things in real life — divide evenly, then handle the remainder separately.
