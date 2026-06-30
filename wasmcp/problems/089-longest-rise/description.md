## Level 6-089 · Longest Rise

```
  📈 Find the longest strictly increasing subsequence!
  ──────────────────────────────────────────────────────
  Powers: 3  1  4  1  5  9  2  6  5  3  5

  One LIS: 1  4  5  9  ← length 4
  Another: 1  2  5    ← length 3
  Another: 1  2  6    ← length 3
  Another: 1  4  5  6 ← length 4
  Another: 1  2  3  5 ← length 4

  Longest: 4  (many valid subsequences of that length)

  DP idea: dp[i] = length of LIS ending at index i
  dp[i] = max(dp[j]+1) for all j < i where a[j] < a[i]
```

A knight's power level changes each day. Find the length of the **Longest Strictly Increasing Subsequence (LIS)** — not necessarily contiguous.

---

### 📥 Input

```
N             ← number of days
a₁ a₂ … aN   ← power levels
```

### 📤 Output

```
[length of LIS]
```

---

### 🧪 Examples

| Input | Output |
|---|---|
| `11`↵`3 1 4 1 5 9 2 6 5 3 5` | `4` |
| `5`↵`1 2 3 4 5` | `5` |
| `4`↵`5 4 3 2` | `1` |

**Constraint:** $1 \leq N \leq 1{,}000$, $1 \leq a_i \leq 10{,}000$
