## 🎮 Level 2-20 · Market Meeting

```
  🏡 Mrs. A ──────────────────────────── 🏡 Mrs. B
      →→→→→→→→→→→→→         ←←←←←←←←←←←←←
   (walks whole road in Ta hours)   (in Tb hours)

   They start at the SAME time walking TOWARD each other.
   Combined rate = 1/Ta + 1/Tb of the road per hour.
                         💥 MEET!
```

Two old ladies live at **opposite ends** of a market road.
Mrs. A can walk the whole road alone in $T_a$ hours.
Mrs. B can walk the whole road alone in $T_b$ hours.

They leave home **at the same time** and walk toward each other.

**How long until they meet? Express as a reduced fraction.**

---

### 📥 Input

```
Ta   ← Mrs. A's solo crossing time (hours)
Tb   ← Mrs. B's solo crossing time (hours)
```

### 📤 Output

```
[numerator] [denominator]
```

Reduced fraction of the meeting time (in hours).

---

### 🔑 Formula

$$\text{time} = \frac{T_a \times T_b}{T_a + T_b} \quad \text{(reduce with GCD)}$$

---

### 🧪 Examples

| Ta | Tb | Output |
|---|---|---|
| `2` | `3` | `6 5` |
| `3` | `6` | `2 1` |
| `4` | `6` | `12 5` |

**Constraint:** $1 \leq T_a, T_b \leq 1{,}000{,}000$
