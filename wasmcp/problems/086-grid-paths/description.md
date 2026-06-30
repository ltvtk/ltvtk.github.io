## Level 6-086 · Grid Paths

```
  🤖 Robot moves only RIGHT or DOWN — count all paths!
  ──────────────────────────────────────────────────────
  3×3 grid:
  S → → ·
  ↓ · · ↓
  · · · E

  Each cell (i,j): paths to reach = paths from left + paths from above
  
  dp[i][j] = dp[i-1][j] + dp[i][j-1]

  Grid values:
  1  1  1
  1  2  3
  1  3  6  ← 6 paths to reach (3,3)!
```

A robot starts at the **top-left** (row 1, col 1) of an **N×M** grid. It can only move **right** or **down** one step at a time. Count the total paths to reach the **bottom-right** (row N, col M).

---

### 📥 Input

```
N  M     ← grid dimensions
```

### 📤 Output

```
[number of paths]
```

---

### 🧪 Examples

| Input | Output |
|---|---|
| `3 3` | `6` |
| `1 1` | `1` |
| `2 3` | `3` |

**Constraint:** $1 \leq N, M \leq 20$
