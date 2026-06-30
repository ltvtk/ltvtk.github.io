## 🎮 Level 2-14 · Mystery Field

```
  🧑‍🌾 Farmer Max has a rectangle field.
  He forgot the exact length and width —
  but he remembers TWO clues:

  ┌─────────────────────────────────┐
  │←──────── Length ───────────────►│
  │                                 │ ↕ Width
  └─────────────────────────────────┘

     Length + Width = S  (sum)
     Length − Width = D  (difference)

  Can YOU find the area?  Area = Length × Width
```

---

### 📥 Input

```
S    ← Length + Width
D    ← Length − Width
```

### 📤 Output

```
[area of the field]
```

---

### 🔑 Key Insight

$$\text{Length} = \frac{S + D}{2} \qquad \text{Width} = \frac{S - D}{2}$$

---

### 🧪 Examples

| S | D | Output |
|---|---|---|
| `10` | `2` | `24` |
| `20` | `4` | `96` |
| `12` | `0` | `36` |

**Constraint:** $1 \leq D < S \leq 1{,}000{,}000$, $S$ and $D$ have the same parity.
