## 🎮 Level 2-051 · Ant Triangle

```
  🐜 Three ants each carry a stick:
  
    a=3, b=4, c=5
    3+4=7 > 5 ✓
    3+5=8 > 4 ✓
    4+5=9 > 3 ✓
    → YES, they form a triangle!
  
    a=1, b=2, c=10
    1+2=3 < 10 ✗
    → NO triangle possible!
```

Three ants each carry a stick with lengths **a**, **b**, **c**.
They want to arrange the sticks into a triangle for decoration.
Three sticks form a triangle **only if each side is shorter than the sum of the other two**.

---

### 📥 Input

```
a    ← length of stick 1
b    ← length of stick 2
c    ← length of stick 3
```

### 📤 Output

```
YES    (if a triangle can be formed)
NO     (otherwise)
```

---

### 🧪 Examples

| Input | Output |
|---|---|
| `3`↵`4`↵`5` | `YES` |
| `1`↵`2`↵`10` | `NO` |

**Constraint:** $1 \leq a, b, c \leq 1{,}000$
