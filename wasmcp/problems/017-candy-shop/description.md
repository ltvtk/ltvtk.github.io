## 🎮 Level 2-17 · Candy Shop

```
  💰 Bi has M coins.

  🍬 Single candy ── costs A coins  (1 candy)
  🎁 Combo pack  ── costs B coins  (2 candies!)

  ┌────────────────────────────────────────┐
  │  Buy all singles?  M ÷ A = ? candies  │
  │  Buy max combos?   M ÷ B combos       │
  │           then singles with the rest  │
  │                                        │
  │  → Pick the BIGGER number! 🏆          │
  └────────────────────────────────────────┘
```

Bi wants to get the **maximum** number of candies from his coins.
He can mix and match singles and combo packs in any order.

---

### 📥 Input

```
M    ← total coins
A    ← cost of 1 single candy
B    ← cost of combo pack (gives 2 candies)
```

### 📤 Output

```
[maximum candies]
```

---

### 🧪 Examples

| M | A | B | Output |
|---|---|---|---|
| `10` | `5` | `8` | `2` |
| `15` | `5` | `8` | `3` |
| `16` | `5` | `8` | `4` |

**Constraint:** $1 \leq A, B \leq M \leq 100{,}000$
