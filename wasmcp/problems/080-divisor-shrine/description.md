## Level 5-080 · Divisor Shrine

```
  🏛️  Count all divisors of N
  ─────────────────────────────
  N = 36:
  Divisors: 1, 2, 3, 4, 6, 9, 12, 18, 36
  Count = 9

  Clever trick: pair each divisor ≤ √N with N/d:
  √36 = 6
    1 × 36 ✓  (pair)
    2 × 18 ✓  (pair)
    3 × 12 ✓  (pair)
    4 ×  9 ✓  (pair)
    5 →  not a divisor
    6 ×  6 ✓  (self-pair! count once)
  
  Total = 4 pairs × 2 + 1 self = 9  ✓
```

Count the number of positive divisors (factors) of **N**.

---

### 📥 Input

```
N     ← the number
```

### 📤 Output

```
[number of divisors of N]
```

---

### 🧪 Examples

| Input | Output |
|---|---|
| `36` | `9` |
| `1` | `1` |
| `7` | `2` |
| `12` | `6` |

**Constraint:** $1 \leq N \leq 10^6$
