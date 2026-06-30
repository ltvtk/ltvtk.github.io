## 🎮 Level 2-052 · Baby Clinic

```
  🏥 Blue Smile Clinic — Patient Rooms
  ────────────────────────────────────
  Age (months)   Room
   0 – 23    →  👶 Newborn
  24 – 71    →  🧒 Preschool
  72 – 144   →  📚 School
   145+      →  🧑 Teen
  ────────────────────────────────────
```

Dr. Phuong runs the "Blue Smile" children's clinic.
She sorts patients into rooms by age (in months) for the right care.
Which room does today's patient go to?

---

### 📥 Input

```
A    ← patient's age in months
```

### 📤 Output

```
Newborn      (A < 24)
Preschool    (24 ≤ A < 72)
School       (72 ≤ A ≤ 144)
Teen         (A > 144)
```

---

### 🧪 Examples

| Input | Output |
|---|---|
| `30` | `Preschool` |
| `10` | `Newborn` |
| `100` | `School` |
| `200` | `Teen` |

**Constraint:** $0 \leq A \leq 300$
