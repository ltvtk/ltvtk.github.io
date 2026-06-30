## Level 4-063 · Stolen Gem

```
  💎 Gems numbered 1 to N
  ──────────────────────────
  N = 5  →  all gems:  1 2 3 4 5
  Given:               4 1 3 5
  Missing:             2  ← stolen!

  Trick:
    Expected sum = 5×6/2 = 15
    Actual sum   = 4+1+3+5 = 13
    Missing      = 15 - 13 = 2  ✓
```

The royal wizard numbered every magic gem from **1** to **N**. One gem was stolen by a sneaky trickster! All other **N−1** gem numbers are still visible — find the missing gem.

---

### 📥 Input

```
N                     ← total gems originally
a₁ a₂ … a_{N−1}      ← the remaining N−1 gem numbers (space-separated)
```

### 📤 Output

```
[missing gem number]
```

---

### 🧪 Examples

| Input | Output |
|---|---|
| `5`↵`4 1 3 5` | `2` |
| `3`↵`1 3` | `2` |

**Constraint:** $2 \leq N \leq 100{,}000$
