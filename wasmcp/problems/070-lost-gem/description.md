## Level 4-070 · Lost Gem

```
  🔑 MEX = Minimum EXcluded positive integer
  ────────────────────────────────────────────
  Collection: 3  1  4  1  5  9  2  6  5
  Has 1? ✓   Has 2? ✓   Has 3? ✓
  Has 4? ✓   Has 5? ✓   Has 6? ✓
  Has 7? ✗  ← MISSING!

  MEX = 7  ← the Lost Gem!
```

A wizard has a magic gem collection (numbers can repeat). The **Lost Gem** is the **smallest positive integer** that is NOT in the collection. Find it!

---

### 📥 Input

```
N               ← number of gems in the collection
a₁ a₂ … aN     ← gem values (space-separated, may repeat)
```

### 📤 Output

```
[MEX — smallest positive integer not in collection]
```

---

### 🧪 Examples

| Input | Output |
|---|---|
| `9`↵`3 1 4 1 5 9 2 6 5` | `7` |
| `3`↵`1 2 3` | `4` |
| `3`↵`2 3 4` | `1` |

**Constraint:** $1 \leq N \leq 10^5$, $1 \leq a_i \leq 10^6$
