## Level 5-076 · Crystal Search

```
  🔮 Binary Search — find X by asking about the midpoint!
  ──────────────────────────────────────────────────────────
  Sorted powers: 1  3  5  7  9  11  13  15  17  19
  Indices:       0  1  2  3  4   5   6   7   8   9
  Find X = 7:

  lo=0, hi=9, mid=4 → a[4]=9  > 7  → hi=3
  lo=0, hi=3, mid=1 → a[1]=3  < 7  → lo=2
  lo=2, hi=3, mid=2 → a[2]=5  < 7  → lo=3
  lo=3, hi=3, mid=3 → a[3]=7 == 7  ✓ Found at index 3!

  Only 4 checks instead of scanning all 10! ✓
```

Magic crystals are sorted by **power level** in a row. Find the **0-based index** of crystal with power **X**. If not found, output `-1`.

---

### 📥 Input

```
N  X             ← N crystals, target power X
a₀ a₁ … a_{N-1} ← sorted power levels (ascending, may have duplicates)
```

### 📤 Output

```
[index of X, or -1 if not found]
```
If X appears multiple times, output the **first** (leftmost) index.

---

### 🧪 Examples

| Input | Output |
|---|---|
| `10 7`↵`1 3 5 7 9 11 13 15 17 19` | `3` |
| `5 6`↵`1 3 5 7 9` | `-1` |
| `4 3`↵`1 3 3 7` | `1` |

**Constraint:** $1 \leq N \leq 10^5$, $1 \leq X \leq 10^9$, array is sorted ascending
