## 🎮 Level 2-045 · Picnic Tables

```
  N = 22 students, 6 seats per table
  
  Table 1   Table 2   Table 3   Table 4
  🧑🧑🧑🧑🧑🧑 🧑🧑🧑🧑🧑🧑 🧑🧑🧑🧑🧑🧑 🧑🧑🧑🧑__
  (full)    (full)    (full)    (4 sit, 2 empty)
  
  → 4 tables, 2 empty seats
```

The park set up picnic tables for a class outing. Each wooden table seats exactly **6** students.
The teacher has **N** students — what is the **minimum number of tables** needed?
And how many **empty seats** will there be at the last table?

---

### 📥 Input

```
N    ← number of students
```

### 📤 Output

```
[minimum tables] [empty seats]
```

---

### 🧪 Examples

| Input | Output |
|---|---|
| `22` | `4 2` |
| `12` | `2 0` |
| `7` | `2 5` |

**Constraint:** $1 \leq N \leq 1{,}000$
