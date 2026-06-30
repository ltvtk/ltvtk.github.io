## 🎮 Level 3-28 · Clever Boy Gauss

```
  Teacher: "Add ALL numbers from 1 to 100! That'll keep you busy!"

  Everyone else:  1+2+3+4+5+...⏳ (takes forever!)

  Young Gauss:  😏 Wait...

    1   +   100  =  101
    2   +    99  =  101
    3   +    98  =  101
    ...
   50   +    51  =  101

  50 pairs × 101 = 5050  ✅  Done in 3 seconds!
```

Use Gauss's trick to compute $1 + 2 + 3 + \ldots + N$ **without a loop**.

---

### 📥 Input

```
N    ← last number in the sum
```

### 📤 Output

```
[sum from 1 to N]
```

---

### 🔑 Formula

$$1 + 2 + \cdots + N = \frac{N \times (N+1)}{2}$$

---

### 🧪 Examples

| N | Output |
|---|---|
| `100` | `5050` |
| `10` | `55` |
| `1` | `1` |

**Constraint:** $1 \leq N \leq 1{,}000{,}000$
