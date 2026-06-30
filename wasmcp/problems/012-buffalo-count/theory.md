## Theory: Parity Check with Modulo

**Parity** tells us whether a number is even or odd.

| Expression | Meaning |
|---|---|
| `S % 2 == 0` | S is even (divisible by 2) |
| `S % 2 == 1` | S is odd |

The `%` operator gives the **remainder** after division. Any even number divided by 2 has remainder 0; any odd number has remainder 1.

```python
S = int(input())
if S % 2 == 1:
    print(-1)
else:
    print(S // 2)
```

**Why `//` instead of `/`?**  
`/` gives a float: `8 / 2` → `4.0`  
`//` gives an integer: `8 // 2` → `4`  
The judge expects a whole number, so always use `//` for integer division.

**Real-world use:** Parity checks are used in error detection — like the checksum digit on barcodes and credit card numbers (Luhn algorithm).
