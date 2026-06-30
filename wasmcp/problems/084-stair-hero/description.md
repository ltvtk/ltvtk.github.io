## Level 6-084 · Stair Hero

```
  🏔️  Count ways to climb N stairs (1 or 2 steps at a time)
  ────────────────────────────────────────────────────────────
  N = 4 stairs:
  ways(4) = ways(3) + ways(2)
          = (ways(2)+ways(1)) + ways(2)
          = 3 + 2 = 5

  All 5 paths for N=4:
  1-1-1-1
  1-1-2
  1-2-1
  2-1-1
  2-2

  Pattern: ways(n) = ways(n-1) + ways(n-2)
  This is just Fibonacci! 🌀
```

A hero must climb **N** stairs. Each step takes either **1** or **2** stairs at a time. Count the **total number of different ways** to reach the top.

---

### 📥 Input

```
N     ← number of stairs
```

### 📤 Output

```
[number of ways]
```

---

### 🧪 Examples

| Input | Output |
|---|---|
| `4` | `5` |
| `1` | `1` |
| `5` | `8` |

**Constraint:** $1 \leq N \leq 45$
