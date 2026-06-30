## 🎮 Level 3-058 · Shell Spiral

```
  🐌 Snail Shell Rings
  ────────────────────
  Ring:  1  2  3  4  5  6  7 ...
  Lines: 1  1  2  3  5  8  13 ...
             ↑↑  each = sum of previous two!
  
  This is the Fibonacci sequence!
```

Grandma Lin's garden snails have beautiful spiral shells.
Each ring has a number of lines following a magical rule:
the 1st and 2nd rings each have **1 line**, and each ring after is the **sum of the previous two**.
How many lines does ring **N** have?

---

### 📥 Input

```
N    ← the ring number
```

### 📤 Output

```
[Nth Fibonacci number]
```

---

### 🧪 Examples

| Input | Output |
|---|---|
| `6` | `8` |
| `1` | `1` |
| `10` | `55` |

**Constraint:** $1 \leq N \leq 30$
