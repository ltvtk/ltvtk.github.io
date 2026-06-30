## 🎮 Level 2-047 · Spin Wheel

```
  🎡 Lucky Spin Wheel
  ┌─────────────────────────┐
  │ Pos: 1  2  3  4  5  6  │
  │      🔴 🔵 🟡 🔴 🔵 🟡 │
  │      7  8  9  10 ...   │
  │      🔴 🔵 🟡 🔴 ...   │
  └─────────────────────────┘
  Pattern repeats: Red-Blue-Yellow
```

At the school fair there's a lucky spinning wheel! The 3 colors repeat in order:
**Red** (positions 1, 4, 7, ...), **Blue** (positions 2, 5, 8, ...), **Yellow** (positions 3, 6, 9, ...).
What color is position **K**?

---

### 📥 Input

```
K    ← spin position
```

### 📤 Output

```
Red      (if K mod 3 == 1)
Blue     (if K mod 3 == 2)
Yellow   (if K mod 3 == 0)
```

---

### 🧪 Examples

| Input | Output |
|---|---|
| `1` | `Red` |
| `5` | `Blue` |
| `6` | `Yellow` |

**Constraint:** $1 \leq K \leq 1{,}000{,}000$
