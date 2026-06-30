## 🎮 Level 3-060 · Lucky Squad

```
  🏁 Math Festival — Team Assignment by K mod 6
  ──────────────────────────────────────────────
  K mod 6:   1      2,4    3       5       0
  Team:     🔴Red  🔵Blue 🟡Yellow 🟣Purple 🟠Orange
  ──────────────────────────────────────────────
  K=14: 14%6=2 → Blue
  K=3:   3%6=3 → Yellow
  K=6:   6%6=0 → Orange
```

At the "Math is Fun!" festival, students are divided into colored teams based on their registration number.
Each student's team is determined by K modulo 6.
Which team does student K belong to?

---

### 📥 Input

```
K    ← student's registration number
```

### 📤 Output

```
Red       (K % 6 == 1)
Blue      (K % 6 == 2 or K % 6 == 4)
Yellow    (K % 6 == 3)
Purple    (K % 6 == 5)
Orange    (K % 6 == 0)
```

---

### 🧪 Examples

| Input | Output |
|---|---|
| `14` | `Blue` |
| `3` | `Yellow` |
| `6` | `Orange` |

**Constraint:** $1 \leq K \leq 1{,}000{,}000$
