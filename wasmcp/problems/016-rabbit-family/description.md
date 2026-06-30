## 🎮 Level 2-16 · Rabbit Family

```
  Month:  1   2   3   4   5   6   7 ...
  Count:  1   1   2   3   5   8  13 ...
          ↑   ↑   ↑↑  ↑↑  ↑↑  ↑↑
         base base  each = sum of last TWO!

  🐇       🐇🐇    🐇🐇🐇  🐇🐇🐇🐇🐇
  month 1  month 3  month 5   ...
```

Farmer Leo has magical rabbits. He starts with **1 rabbit** in month 1.
Each month, the herd grows: the count equals the **sum of the previous two months**.

This is the famous **Fibonacci sequence**!

**How many rabbits in month N?**

---

### 📥 Input

```
N    ← the month number
```

### 📤 Output

```
[rabbit count at month N]
```

---

### 🧪 Examples

| N | Output |
|---|---|
| `5` | `5` |
| `10` | `55` |
| `1` | `1` |

**Constraint:** $1 \leq N \leq 30$
