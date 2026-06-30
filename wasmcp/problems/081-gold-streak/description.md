## Level 5-081 · Gold Streak

```
  ⛏️  Find the best consecutive mining streak!
  ──────────────────────────────────────────────
  Daily gold (can be negative on bad days):
  -2  1  -3  4  -1  2  1  -5  4

  Strategy: track current streak, reset when it drops below 0
  Day 1: curr=-2        best=-2
  Day 2: curr=-2+1=-1  best=-1
  Day 3: curr=-1-3=-4  best=-1
  Day 4: curr=0+4=4    best=4   ← reset! (4 alone is better)
  Day 5: curr=4-1=3    best=4
  Day 6: curr=3+2=5    best=5
  Day 7: curr=5+1=6    best=6
  Day 8: curr=6-5=1    best=6
  Day 9: curr=1+4=5    best=6

  Best streak = 6  (days 4-7: 4,-1,2,1)
```

A miner's daily gold finds can be negative (bad days). Find the **maximum sum** of any non-empty consecutive subarray.

---

### 📥 Input

```
N             ← number of days
a₁ a₂ … aN   ← gold found each day (may be negative)
```

### 📤 Output

```
[maximum subarray sum]
```

---

### 🧪 Examples

| Input | Output |
|---|---|
| `9`↵`-2 1 -3 4 -1 2 1 -5 4` | `6` |
| `5`↵`-1 -2 -3 -4 -5` | `-1` |
| `4`↵`1 2 3 4` | `10` |

**Constraint:** $1 \leq N \leq 10^5$, $-10^4 \leq a_i \leq 10^4$
