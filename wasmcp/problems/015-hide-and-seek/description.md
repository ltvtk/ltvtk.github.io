## 🎮 Level 2-15 · Hide and Seek

```
  🐢 Turtle starts at mark R        🐰 Rabbit starts at mark T
  │                                  │
  0──────T────────────────R──────────►
              gap = R − T

  Rabbit runs at Vt m/s   (Vt > Vr)
  Turtle runs at Vr m/s

  Each second, Rabbit closes (Vt − Vr) meters of the gap.
  When Rabbit catches Turtle → 💥 TAG!
```

Rabbit is chasing Turtle on a straight road. Turtle has a head start!
Find **when** Rabbit catches up and **where** they meet.

---

### 📥 Input

```
R    ← Turtle's starting position (marks)
T    ← Rabbit's starting position (marks)
Vt   ← Rabbit's speed (m/s)
Vr   ← Turtle's speed (m/s)
```

Both run in the **same direction**. $V_t > V_r$ — Rabbit is always faster.

### 📤 Output

```
[seconds] [meeting mark]
```

Two numbers separated by a space.

---

### 🧪 Examples

| R | T | Vt | Vr | Output |
|---|---|---|---|---|
| `10` | `0` | `5` | `3` | `5 25` |
| `20` | `0` | `4` | `2` | `10 40` |

**Constraint:** $0 \leq T < R \leq 1{,}000{,}000$, $1 \leq V_r < V_t \leq 1{,}000$, gap divisible by $(V_t - V_r)$.
