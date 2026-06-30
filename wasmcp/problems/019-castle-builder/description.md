## 🎮 Level 2-19 · Castle Builder

```
  Tom builds TWO clay castles:

  🟫 CUBE CASTLE           📦 BOX CASTLE
  ┌─────┐                  ┌────────────┐
  │     │ side = A         │            │ H
  │     │                  │            │
  └─────┘                  └────────────┘
  A × A × A = ?             L  (W deep)
  Volume = A³               L × W × H = ?

  Who needs MORE clay?  → Print the winner + volume!
```

Tom builds a **cube** (all sides = A) and a **rectangular box** (sides L, W, H).
Volume of clay = volume of the shape. Which one needs more?

---

### 📥 Input

```
A    ← cube side length
L    ← box length
W    ← box width
H    ← box height
```

### 📤 Output

```
Cube [volume]      ← if cube needs more clay
Box [volume]       ← if box needs more clay
Equal [volume]     ← if both need the same
```

---

### 🧪 Examples

| A | L | W | H | Output |
|---|---|---|---|---|
| `3` | `2` | `3` | `4` | `Cube 27` |
| `4` | `2` | `4` | `10` | `Box 80` |
| `3` | `3` | `3` | `3` | `Equal 27` |

**Constraint:** $1 \leq A, L, W, H \leq 1{,}000$
