## Level 4-064 · Mountain Peak

```
  ⛰️  Finding the rightmost peak hill
  ─────────────────────────────────────
  Heights: 7  20  0  8  7
             ↑         ↑
            peak      peak  ← rightmost!

  A peak: hill[i] ≥ hill[i-1]  AND  hill[i] ≥ hill[i+1]
  First and last hills can never be peaks (no neighbor on one side).

  Answer = 8  (rightmost peak value)
```

Teo is exploring a range of hills. A hill is a **peak** if it is at least as tall as both its left and right neighbors. Find the **value** of the rightmost peak hill.

---

### 📥 Input

```
N             ← number of hills
h₁ h₂ … hN   ← hill heights (space-separated)
```

### 📤 Output

```
[value of the rightmost peak]
```
Print `Impossible` if no peak exists.

---

### 🧪 Examples

| Input | Output |
|---|---|
| `5`↵`7 20 0 8 7` | `8` |
| `6`↵`0 2 -1 4 5 7` | `2` |
| `3`↵`1 2 3` | `Impossible` |

**Constraint:** $3 \leq N \leq 10{,}000$, $-10^6 \leq h_i \leq 10^6$
