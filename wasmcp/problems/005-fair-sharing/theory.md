## Theory: Integer Division and Remainder

Python has two division operators for whole numbers:

| Operator | Name | Example (17 ÷ 5) |
|---|---|---|
| `//` | Floor division (quotient) | `17 // 5` → `3` |
| `%` | Modulo (remainder) | `17 % 5` → `2` |

They satisfy: $M = N \times (M \mathbin{//} N) + (M \mathbin{\%} N)$

```python
M = int(input())
N = int(input())
print(M // N, M % N)
```

`print(a, b)` prints both values separated by a space — exactly what the judge expects.

**Mathematical insight:** Division with remainder is called **Euclidean division** and is the foundation of many algorithms (GCD, modular arithmetic, base conversion).
