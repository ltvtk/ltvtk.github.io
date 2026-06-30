## Level 5-078 · Power Spell

```
  ⚡ Fast Power — compute B^E mod M quickly!
  ────────────────────────────────────────────
  B=2, E=10, M=1000:

  Naive: 2×2×2×…×2 (10 times) → 1024 mod 1000 = 24
  But E can be up to 10^9 — way too slow!

  Binary exponentiation trick:
  2^10 = 2^(1010 in binary)
       = 2^8 × 2^2
  
  2^1  = 2   (mod 1000)
  2^2  = 4
  2^4  = 16
  2^8  = 256
  2^10 = 256 × 4 = 1024 mod 1000 = 24 ✓
  
  Only 4 multiplications instead of 10!
```

A magic spell requires computing **B^E mod M** — but E can be astronomically large. Use the **Fast Power** (binary exponentiation) technique.

---

### 📥 Input

```
B    ← base
E    ← exponent
M    ← modulus
```

### 📤 Output

```
[B^E mod M]
```

---

### 🧪 Examples

| Input | Output |
|---|---|
| `2`↵`10`↵`1000` | `24` |
| `3`↵`0`↵`7` | `1` |
| `5`↵`3`↵`13` | `8` |

**Constraint:** $0 \leq B, E \leq 10^9$, $1 \leq M \leq 10^9$
