## Level 5-075 · Factor Tree

```
  🌳 Every number has a unique prime combination lock!
  ──────────────────────────────────────────────────────
  N = 360:
        360
       /   \
      2    180
           /  \
          2    90
              /  \
             2    45
                 /  \
                3    15
                    /  \
                   3    5   ← prime!

  360 = 2 × 2 × 2 × 3 × 3 × 5
  Output: 2 2 2 3 3 5
```

The ancient vault's combination lock uses prime factors. Decompose **N** into its prime factors, sorted in ascending order, space-separated.

---

### 📥 Input

```
N     ← the number to factorize
```

### 📤 Output

```
[prime factors in ascending order, space-separated]
```

---

### 🧪 Examples

| Input | Output |
|---|---|
| `360` | `2 2 2 3 3 5` |
| `12` | `2 2 3` |
| `17` | `17` |
| `1` | *(empty line)* |

**Constraint:** $1 \leq N \leq 10^6$
