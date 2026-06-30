## 🎮 Level 1-10 · Water Pipes

```
  🟪 Purple pipe ──┐
  🟨 Yellow pipe ──┼──► [  CAGE  ] ← filling up...
  🟦 Blue pipe  ──┘

  A hours alone    B hours alone    C hours alone

  All 3 OPEN at ONCE → how long?
```

Mario opens all three pipes simultaneously to fill the cage and rescue Princess Peach!

**Find the fill time — as a fraction.**

---

### 📥 Input

```
A    ← Purple alone time
B    ← Yellow alone time
C    ← Blue alone time
```

### 📤 Output

```
[numerator] [denominator]
```

Reduced fraction of total fill time.

---

### 🔑 Formula

$$\text{rate} = \frac{1}{A} + \frac{1}{B} + \frac{1}{C} \qquad \text{time} = \frac{1}{\text{rate}}$$

---

### 🧪 Examples

| A | B | C | Output |
|---|---|---|---|
| `3` | `2` | `4` | `12 13` |
| `6` | `3` | `2` | `1 1` |
| `1` | `2` | `3` | `6 11` |

**Constraint:** $1 \leq A, B, C \leq 1{,}000{,}000$
