## 🎮 Level 3-059 · Perfect Number

```
  🏆 Is N a Perfect Number?
  ────────────────────────────
  N=6: proper divisors = 1, 2, 3
       1 + 2 + 3 = 6 ✓ → Perfect!

  N=28: divisors = 1,2,4,7,14
        1+2+4+7+14 = 28 ✓ → Perfect!

  N=10: divisors = 1, 2, 5
        1+2+5 = 8 ≠ 10 → Not Perfect
```

In the Young Mathematicians Club, Teacher Minh introduces **perfect numbers** —
numbers that equal the sum of all their proper divisors (every divisor except the number itself).
Is N a perfect number?

---

### 📥 Input

```
N    ← the number to check
```

### 📤 Output

```
Perfect        (if N equals the sum of its proper divisors)
Not Perfect    (otherwise)
```

---

### 🧪 Examples

| Input | Output |
|---|---|
| `6` | `Perfect` |
| `28` | `Perfect` |
| `10` | `Not Perfect` |

**Constraint:** $1 \leq N \leq 10{,}000$
