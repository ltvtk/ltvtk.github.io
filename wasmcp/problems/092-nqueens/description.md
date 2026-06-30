## Level 6-092 · N-Queens

```
  👑 Place N queens so none attack each other!
  ──────────────────────────────────────────────
  N = 4:  Two valid arrangements exist:

  . Q . .     . . Q .
  . . . Q     Q . . .
  Q . . .     . . . Q
  . . Q .     . Q . .

  Queens attack along rows, columns, AND diagonals!
  
  Backtracking: try each column in each row,
  skip if any previously placed queen attacks.
```

Place **N queens** on an **N×N** chessboard so that **no two queens threaten each other** (no shared row, column, or diagonal). Count the number of valid arrangements.

---

### 📥 Input

```
N     ← board size (and number of queens)
```

### 📤 Output

```
[number of valid arrangements]
```

---

### 🧪 Examples

| Input | Output |
|---|---|
| `4` | `2` |
| `1` | `1` |
| `8` | `92` |

**Constraint:** $1 \leq N \leq 12$
