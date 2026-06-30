## Level 5-079 · Interval Dance

```
  💃 Pack the most non-overlapping dance acts!
  ──────────────────────────────────────────────
  Acts (start, end):  [1,4] [2,3] [3,5] [6,9] [8,10]

  Greedy: sort by END time, pick greedily
  Sort:   [2,3]  [1,4]  [3,5]  [6,9]  [8,10]

  Pick [2,3]  → last_end = 3
  Skip [1,4]  → starts at 1 < 3, overlaps
  Skip [3,5]  → starts at 3 = 3, overlaps (need strict >)
  Pick [6,9]  → starts at 6 > 3  ✓  last_end = 9
  Skip [8,10] → starts at 8 < 9, overlaps
  
  Maximum non-overlapping acts = 2
```

**N** dance acts each want a time slot [L, R]. Two acts conflict if their intervals overlap (they share any time). Choose the **maximum number** of non-conflicting acts.

---

### 📥 Input

```
N               ← number of acts
L₁ R₁
L₂ R₂
…
```

### 📤 Output

```
[maximum non-overlapping acts]
```

---

### 🧪 Examples

| Input | Output |
|---|---|
| `5`↵`1 4`↵`2 3`↵`3 5`↵`6 9`↵`8 10` | `2` |
| `3`↵`1 2`↵`3 4`↵`5 6` | `3` |

**Constraint:** $1 \leq N \leq 1{,}000$, $1 \leq L_i \leq R_i \leq 10^6$
