## Theory: Binary to Decimal

Process the binary string left to right: start with result = 0, then for each bit: result = result × 2 + bit.

```python
b = input().strip()
result = 0
for ch in b:
    result = result * 2 + int(ch)
print(result)
```

**Why it works:** Each new bit shifts the existing value one position left (×2) and adds the new bit. This is Horner's method applied to base-2.

- "101101": 0→1→2→5→11→22→45 ✓
- Python shortcut: `int(b, 2)` converts binary string to decimal directly.
- Max 30 bits → max value = 2³⁰ − 1 ≈ 10⁹, fits in standard integer.
