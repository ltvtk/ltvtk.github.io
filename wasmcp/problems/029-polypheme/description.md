## 🎮 Level 3-29 · Monster Polypheme

```
  🏺 Giant water statue — 3 spouts!

  💪 ARM   spout:  fills the pool alone in  A   days
  👁️ EYE   spout:  fills the pool alone in  B   days
  👄 MOUTH spout:  fills the pool alone in  C/D days  (a FRACTION of a day!)

  Open ALL THREE at once! ⛲⛲⛲
  When is the pool FULL?  → Answer as a reduced fraction.
```

Three spouts fill the same pool. The mouth spout is so powerful its time is given as a **fraction** $C/D$ days. When all three run together, find the total fill time as a **reduced fraction**.

---

### 📥 Input

```
A    ← arm days
B    ← eye days
C    ← mouth time numerator
D    ← mouth time denominator  (mouth fills in C/D days)
```

### 📤 Output

```
[numerator] [denominator]
```

Reduced fraction of the fill time (in days).

---

### 🧪 Examples

| A | B | C | D | Output |
|---|---|---|---|---|
| `3` | `2` | `2` | `5` | `3 10` |
| `6` | `3` | `1` | `1` | `2 3` |

**Constraint:** $1 \leq A, B, C, D \leq 1{,}000{,}000$
