## Level 6-083 · Tribonacci

```
  🌀 Wizard Tribon's triple-spell sequence
  ──────────────────────────────────────────
  tri(0) = 0
  tri(1) = 0
  tri(2) = 1
  tri(n) = tri(n-1) + tri(n-2) + tri(n-3)

  n:    0  1  2  3  4  5  6   7   8   9  10
  tri:  0  0  1  1  2  4  7  13  24  44  81

  Like Fibonacci, but each term sums THREE previous!
```

Wizard Tribon casts spells in a special pattern: each new spell equals the sum of the **three previous** spells. Compute the **N-th Tribonacci number** (0-indexed).

---

### 📥 Input

```
N     ← index (0-based)
```

### 📤 Output

```
[N-th Tribonacci number]
```

---

### 🧪 Examples

| Input | Output |
|---|---|
| `2` | `1` |
| `4` | `2` |
| `7` | `13` |
| `0` | `0` |

**Constraint:** $0 \leq N \leq 37$
