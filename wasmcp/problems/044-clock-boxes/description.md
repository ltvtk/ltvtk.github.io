## 🎮 Level 2-044 · Clock Boxes

```
  🕐🕑🕒🕓🕔🕕🕖🕗 | 🕐🕑🕒🕓🕔🕕🕖🕗 | 🕐🕑🕒🕓🕔
  [  full box (8)  ] [  full box (8)  ] [  5 left ]
  
  N=21, M=8 → 2 full boxes, 5 leftover
```

Master clock-maker Minh finished **N** handcrafted wall clocks.
He packs them into gift boxes — each box holds exactly **M** clocks.
How many **full boxes** can he fill, and how many clocks are **left over**?

---

### 📥 Input

```
N    ← total clocks
M    ← clocks per box
```

### 📤 Output

```
[full boxes] [leftover clocks]
```

---

### 🧪 Examples

| Input | Output |
|---|---|
| `35`↵`8` | `4 3` |
| `12`↵`3` | `4 0` |

**Constraint:** $1 \leq N, M \leq 10^9$
