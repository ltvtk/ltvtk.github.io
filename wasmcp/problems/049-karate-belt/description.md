## 🎮 Level 2-049 · Karate Belt

```
  🥋 Thanh Long Dojo — Belt System
  ────────────────────────────────
  Points  0–49    → 🤍 White Belt
  Points 50–99    → 🔵 Blue Belt
  Points 100+     → 🖤 Black Belt
  ────────────────────────────────
    30pts   75pts   120pts
     🤍      🔵       🖤
```

At the Thanh Long Dojo, students earn belts based on their accumulated training points.
Which belt has this student earned?

---

### 📥 Input

```
P    ← student's total points
```

### 📤 Output

```
White Belt    (if P < 50)
Blue Belt     (if 50 ≤ P < 100)
Black Belt    (if P ≥ 100)
```

---

### 🧪 Examples

| Input | Output |
|---|---|
| `75` | `Blue Belt` |
| `120` | `Black Belt` |
| `30` | `White Belt` |

**Constraint:** $0 \leq P \leq 200$
