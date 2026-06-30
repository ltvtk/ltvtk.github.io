## 🎮 Level 2-13 · Pizza Cuts

```
  K = 1 cut        K = 2 cuts       K = 3 cuts
  ┌───────┐        ┌───┬───┐        ┌─┬──┬─┐
  │       │        │   │   │        │╲│  │╱│
  ├───────┤   →   ├───┼───┤   →   ├─┼──┼─┤
  │       │        │   │   │        │╱│  │╲│
  └───────┘        └───┴───┘        └─┴──┴─┘
   2 slices         4 slices         6 slices
```

Mom hands Ty a round pizza. Every cut goes **straight through the center** — a diameter cut! Each such cut adds exactly **2 new slices**.

**With K cuts through the center, how many slices?**

---

### 📥 Input

```
K    ← number of straight cuts through the center
```

### 📤 Output

```
[number of slices]
```

---

### 🧪 Examples

| K | Output |
|---|---|
| `1` | `2` |
| `3` | `6` |
| `5` | `10` |

**Constraint:** $1 \leq K \leq 100{,}000$
