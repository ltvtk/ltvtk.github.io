## Level 5-077 · Stock Wizard

```
  📈 Buy once, sell once — maximize profit!
  ───────────────────────────────────────────
  Prices over 7 days:  7  1  5  3  6  4  8
  Day:                 0  1  2  3  4  5  6

  Strategy: track the MINIMUM price seen so far
  Day 0: min=7, profit=0
  Day 1: min=1, profit=0
  Day 2: min=1, sell at 5 → profit=4
  Day 3: min=1, sell at 3 → profit=3 (not better)
  Day 4: min=1, sell at 6 → profit=5
  Day 5: min=1, sell at 4 → profit=4 (not better)
  Day 6: min=1, sell at 8 → profit=7  ← BEST!

  Answer: 7
```

The Market Wizard sees potion prices over **N** days. She can buy once and sell once (must buy before selling). Find the **maximum profit** possible. If no profit is possible, output `0`.

---

### 📥 Input

```
N             ← number of days
p₁ p₂ … pN   ← prices each day
```

### 📤 Output

```
[maximum profit]
```

---

### 🧪 Examples

| Input | Output |
|---|---|
| `7`↵`7 1 5 3 6 4 8` | `7` |
| `5`↵`5 4 3 2 1` | `0` |
| `3`↵`1 2 3` | `2` |

**Constraint:** $1 \leq N \leq 10^5$, $1 \leq p_i \leq 10^4$
