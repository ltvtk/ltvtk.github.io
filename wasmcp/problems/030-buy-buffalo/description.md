## 🎮 Level 3-30 · Buy Buffalo

```
  🐃 The village wants to buy a Giant Buffalo together!

  Plan 1 — Groups of 7 families, each group chips in A coins:
     ⚠️  Still SHORT by  B  coins!  📉

  Plan 2 — Groups of 9 families, each group chips in C coins:
     🎉  Surplus of     D  coins!  📈

  Same number of families. Same buffalo. Find both!
```

**How many families are in the village? What is the buffalo's price?**

---

### 📥 Input

```
A    ← coins per group of 7
B    ← shortage under plan 1
C    ← coins per group of 9
D    ← surplus under plan 2
```

### 📤 Output

```
[families],[price]
```

Comma-separated, **no spaces**.

---

### 🧪 Examples

| A | B | C | D | Output |
|---|---|---|---|---|
| `190` | `330` | `270` | `30` | `126,3750` |

**Constraint:** $C$ is divisible by 9. $1 \leq A, B, C, D \leq 1{,}000{,}000$
