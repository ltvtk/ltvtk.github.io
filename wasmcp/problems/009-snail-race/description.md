## 🎮 Level 1-9 · Snail Race

```
  🟢 ──────────────────── 🔴
     ←  A days solo        B days solo →

  They crawl TOWARD each other...
         💥 BUMP! 💥
  After how many days?
```

Two snails start from opposite ends and crawl toward each other.
**Green** crosses alone in $A$ days. **Red** crosses alone in $B$ days.

Find when they meet — as a **fraction**.

---

### 📥 Input

```
A    ← Green's solo crossing time (days)
B    ← Red's solo crossing time (days)
```

### 📤 Output

```
[numerator] [denominator]
```

Reduced fraction of the meeting time.

---

### 🔑 Formula

$$\text{time} = \frac{A \times B}{A + B} \quad \text{(reduce with GCD)}$$

---

### 🧪 Examples

| A | B | Output |
|---|---|---|
| `17` | `20` | `340 37` |
| `2` | `3` | `6 5` |
| `3` | `6` | `2 1` |

**Constraint:** $1 \leq A, B \leq 1{,}000{,}000$
