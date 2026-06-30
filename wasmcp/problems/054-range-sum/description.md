## 🎮 Level 2-054 · Range Sum

```
  A=1, B=5:
  1 + 2 + 3 + 4 + 5
  ↑               ↑
  start          end
       = 15
```

Teacher gives Ti a challenge: add up all integers from **A** to **B** (including both endpoints).
Ti uses a loop to solve it — can you?

---

### 📥 Input

```
A    ← starting number
B    ← ending number (A ≤ B)
```

### 📤 Output

```
[A + (A+1) + ... + B]
```

---

### 🧪 Examples

| Input | Output |
|---|---|
| `1`↵`5` | `15` |
| `3`↵`3` | `3` |
| `1`↵`10` | `55` |

**Constraint:** $1 \leq A \leq B \leq 1{,}000$
