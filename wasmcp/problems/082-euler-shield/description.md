## Level 5-082 · Euler Shield

```
  🛡️  Euler's Totient φ(N) — count of integers coprime with N
  ─────────────────────────────────────────────────────────────
  N = 12:
  Numbers 1..12:  1  2  3  4  5  6  7  8  9  10  11  12
  GCD with 12:    1  2  3  4  1  6  1  4  3   2   1  12
  Coprime (GCD=1):✓        ✓        ✓         ✓

  φ(12) = 4   (numbers: 1, 5, 7, 11)

  Formula shortcut: N = 2² × 3
  φ(12) = 12 × (1 - 1/2) × (1 - 1/3) = 12 × ½ × ⅔ = 4  ✓
```

The Euler Shield casts a spell using **φ(N)** — the count of integers from 1 to N that share no common factor with N (i.e., GCD = 1). Compute φ(N).

---

### 📥 Input

```
N     ← the number
```

### 📤 Output

```
[φ(N)]
```

---

### 🧪 Examples

| Input | Output |
|---|---|
| `12` | `4` |
| `7` | `6` |
| `1` | `1` |
| `36` | `12` |

**Constraint:** $1 \leq N \leq 10^6$
