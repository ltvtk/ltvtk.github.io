## Level 4-072 · Power Glow

```
  ✨ Ancient artifacts glow when N is a power of 2!
  ───────────────────────────────────────────────────
  N=1  → 2⁰=1  ✓ GLOWS
  N=2  → 2¹=2  ✓ GLOWS
  N=4  → 2²=4  ✓ GLOWS
  N=8  → 2³=8  ✓ GLOWS

  N=6  → 6 is not 2^k for any k  ✗ dark

  Bit trick: N & (N-1) == 0  ← works for N > 0
    8  = 1000
    7  = 0111
    8 & 7 = 0000  ← GLOWS! ✓
    
    6  = 110
    5  = 101
    6 & 5 = 100  ≠ 0  ← dark ✗
```

A magical artifact **glows** if and only if its power value **N** is a perfect power of 2 (i.e., $N = 2^k$ for some non-negative integer $k$). Does it glow?

---

### 📥 Input

```
N     ← power value
```

### 📤 Output

```
Yes
```
or
```
No
```

---

### 🧪 Examples

| Input | Output |
|---|---|
| `8` | `Yes` |
| `6` | `No` |
| `1` | `Yes` |
| `1024` | `Yes` |

**Constraint:** $1 \leq N \leq 10^9$
