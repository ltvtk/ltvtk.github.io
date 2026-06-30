## 🎮 Level 2-18 · Grandma's Age

```
  It is year Y.

  👵 Grandma gives you a riddle:
     "If I were 5 years OLDER,
      I would be TWICE your age!"

  👦 You are X years old.

  ┌────────────────────────────────────────┐
  │  Grandma's age + 5  =  2 × X          │
  │  Grandma's age      =  2 × X − 5      │
  │  Birth year         =  Y − Grandma's  │
  └────────────────────────────────────────┘
```

Solve the riddle! Find Grandma's **current age** and the **year she was born**.

---

### 📥 Input

```
Y    ← current year
X    ← your age
```

### 📤 Output

```
[grandma's age] [birth year]
```

Two numbers separated by a space.

---

### 🧪 Examples

| Y | X | Output |
|---|---|---|
| `2024` | `35` | `65 1959` |
| `2000` | `20` | `35 1965` |

**Constraint:** $1000 \leq Y \leq 9999$, $3 \leq X \leq 500$
