## 🎮 Level 3-062 · GCD Charm

```
  🤝 Largest Common Divisor
  ──────────────────────────
  A=12: divisors → 1,2,3,4,6,12
  B=18: divisors → 1,2,3,6,9,18
  Common: 1,2,3,6
  Largest common = 6  ← GCD!
  
  Euclidean trick:
  GCD(12,18) = GCD(18,12)
             = GCD(12, 6)
             = GCD(6, 0) → 6 ✓
```

Ti and Teo are searching for their **lucky common number** — the largest number that divides both A and B with no remainder.
This is the **Greatest Common Divisor (GCD)**, also called the Highest Common Factor.

---

### 📥 Input

```
A    ← first number
B    ← second number
```

### 📤 Output

```
[GCD(A, B)]
```

---

### 🧪 Examples

| Input | Output |
|---|---|
| `12`↵`18` | `6` |
| `7`↵`5` | `1` |

**Constraint:** $1 \leq A, B \leq 1{,}000$
