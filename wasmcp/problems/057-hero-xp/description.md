## 🎮 Level 3-057 · Hero XP

```
  ⚔️ Hero RPG — XP per Level
  ──────────────────────────
  Level 1: 1² =   1 XP
  Level 2: 2² =   4 XP
  Level 3: 3² =   9 XP
  Level 4: 4² =  16 XP
  ...
  Level N: N² = N² XP
  ──────────────────────────
  Total after N levels = 1²+2²+...+N²
```

Minh Khoi plays a hero RPG. At each level k, the hero earns k² XP points.
To unlock the legendary sword, you need to know the **total XP** earned from level 1 all the way to level N.
Calculate the sum of squares!

---

### 📥 Input

```
N    ← maximum level reached
```

### 📤 Output

```
[1² + 2² + 3² + ... + N²]
```

---

### 🧪 Examples

| Input | Output |
|---|---|
| `3` | `14` |
| `5` | `55` |
| `1` | `1` |

**Constraint:** $1 \leq N \leq 100$
