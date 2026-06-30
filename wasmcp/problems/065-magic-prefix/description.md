## Level 4-065 · Magic Prefix

```
  🏰 Gold hidden at 8 spots along a road
  ─────────────────────────────────────────
  Spots:    0   1   2   3   4   5   6   7
  Gold:     1   2   3   4   5   6   7   8

  Query: sum from spot 0 to spot 4?
    → 1+2+3+4+5 = 15  ✓

  Prefix trick:
  P[0] = 0
  P[i] = P[i-1] + gold[i-1]
  Sum[l..r] = P[r+1] - P[l]   ← O(1) per query!
```

A dragon hides gold at **N** spots along the Magic Road. Answer **Q** queries: "How much total gold is between spot **L** and spot **R**?" (both inclusive, 0-indexed).

---

### 📥 Input

```
N                     ← number of spots
a₀ a₁ … a_{N−1}      ← gold amounts (space-separated)
Q                     ← number of queries
L₁ R₁
L₂ R₂
…
```

### 📤 Output

```
[sum for query 1]
[sum for query 2]
…
```

---

### 🧪 Examples

| Input | Output |
|---|---|
| `8`↵`1 2 3 4 5 6 7 8`↵`3`↵`0 4`↵`5 6`↵`5 7` | `15`↵`13`↵`21` |

**Constraint:** $1 \leq N, Q \leq 1{,}000$, $-10^6 \leq a_i \leq 10^6$, $0 \leq L \leq R < N$
