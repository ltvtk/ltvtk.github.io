## 🎮 Level 3-27 · Dad and Son

```
  Today:
  👦 Son  is  A years old.
  👨 Dad  is  B years old.

  The SECRET: no matter how many years pass,
  Dad will ALWAYS be (B − A) years older than Son!

  ┌───────────────────────────────────────┐
  │  In Y years:                          │
  │  Son's age  =  A + Y                  │
  │  Dad's age  =  B + Y                  │
  │                                       │
  │  We want: B + Y  =  2 × (A + Y)      │
  │                                       │
  │  Solve for Y!                         │
  └───────────────────────────────────────┘
```

**In how many years will Dad be EXACTLY TWICE Son's age?**

---

### 📥 Input

```
A    ← son's current age
B    ← dad's current age
```

### 📤 Output

```
[years to wait]
```

---

### 🧪 Examples

| A | B | Output |
|---|---|---|
| `10` | `35` | `15` |
| `5` | `20` | `10` |

**Constraint:** $1 \leq A < B \leq 1{,}000{,}000$, $B > 2A$
