## Level 6-090 · Inversion Count

```
  🃏 Count the "disorder" of a card deck!
  ──────────────────────────────────────────
  Deck: 3  1  2  4

  An INVERSION = a pair (i, j) where i < j but a[i] > a[j]
  
  Check all pairs:
  (3,1) → 3 > 1  ✓ inversion!
  (3,2) → 3 > 2  ✓ inversion!
  (3,4) → 3 < 4  ✗
  (1,2) → 1 < 2  ✗
  (1,4) → 1 < 4  ✗
  (2,4) → 2 < 4  ✗

  Total inversions = 2
  (A perfectly sorted deck has 0 inversions)
```

Count the number of **inversions** in a sequence — pairs (i, j) where i < j but a[i] > a[j]. Inversions measure how "unsorted" the sequence is.

---

### 📥 Input

```
N             ← number of cards
a₁ a₂ … aN   ← card values
```

### 📤 Output

```
[number of inversions]
```

---

### 🧪 Examples

| Input | Output |
|---|---|
| `4`↵`3 1 2 4` | `2` |
| `4`↵`4 3 2 1` | `6` |
| `3`↵`1 2 3` | `0` |

**Constraint:** $1 \leq N \leq 1{,}000$, $1 \leq a_i \leq 10{,}000$
