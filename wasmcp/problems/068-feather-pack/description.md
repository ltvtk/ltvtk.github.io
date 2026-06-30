## Level 4-068 · Feather Pack

```
  🪶 Pack as many feathers as possible!
  ──────────────────────────────────────
  Weight limit T = 10
  Feather weights: 4  1  2  5  8  7  1

  Strategy: pick the LIGHTEST feathers first!
  Sort: 1  1  2  4  5  7  8
  Add:  1  → total=1  ✓
        1  → total=2  ✓
        2  → total=4  ✓
        4  → total=8  ✓
        5  → total=13 ✗ STOP!
  
  Answer: 4 feathers packed
```

A bird collector wants to carry as many feathers as possible without exceeding weight limit **T**. Each feather has a different weight. What is the **maximum number of feathers** she can pack?

---

### 📥 Input

```
N  T          ← N feathers, weight limit T
w₁ w₂ … wN   ← weights (space-separated)
```

### 📤 Output

```
[maximum feathers]
```

---

### 🧪 Examples

| Input | Output |
|---|---|
| `7 10`↵`4 1 2 5 8 7 1` | `4` |
| `3 5`↵`3 3 3` | `1` |

**Constraint:** $1 \leq N \leq 10^5$, $1 \leq T \leq 10^9$, $1 \leq w_i \leq 10^9$
