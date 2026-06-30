## 🎮 Level 2-043 · Flower Pots

```
  🌹🌹🌹🌹 | 🌹🌹🌹🌹 | 🌹🌹🌹🌹 | 🌹🌹🌹?
  [full pot] [full pot] [full pot] [short!]
  
  N=47, M=4: 47 ÷ 4 = 11 r3 → need 1 more
  (12 full pots need 48 seedlings)
```

Farmer Thien has **N** rose seedlings and wants to plant exactly **M** seedlings in each pot.
Every pot must be **completely full** — no half-filled pots!
How many MORE seedlings does he need to buy to fill all the pots with no shortage?

---

### 📥 Input

```
N    ← current number of seedlings
M    ← seedlings needed per pot
```

### 📤 Output

```
[extra seedlings needed]
```

If N is already a multiple of M, the answer is `0`.

---

### 🧪 Examples

| Input | Output |
|---|---|
| `47`↵`4` | `1` |
| `12`↵`4` | `0` |
| `10`↵`3` | `2` |

**Constraint:** $1 \leq N, M \leq 10^9$
