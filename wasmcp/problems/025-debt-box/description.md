## 🎮 Level 3-25 · Debt Box

```
  Three friends settle ice-cream debts with a magic box:

  Chubby 🧑  — LENT   A coins  → will TAKE OUT  A coins
  Skinny 👦  — BORROWED B coins → must DROP IN   B coins
  Shorty 🧒  — LENT   C coins  → will TAKE OUT  C coins

  ┌───────────────────┐
  │  📦  DEBT BOX  📦  │
  │  IN:  B           │
  │  OUT: A + C       │
  └───────────────────┘

  Is the math balanced?  B == A + C  →  OK  ✅
                         B ≠ A + C  →  NO  ❌
```

**Are their memories logically consistent?**

---

### 📥 Input

```
A    ← amount Chubby lent
B    ← amount Skinny borrowed
C    ← amount Shorty lent
```

### 📤 Output

```
OK     ← if B == A + C
NO     ← otherwise
```

---

### 🧪 Examples

| A | B | C | Output |
|---|---|---|---|
| `10` | `30` | `20` | `OK` |
| `10` | `20` | `20` | `NO` |

**Constraint:** $1 \leq A, B, C \leq 1{,}000{,}000$
