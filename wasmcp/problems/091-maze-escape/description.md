## Level 6-091 · Maze Escape

```
  👻 Find the shortest path from S to E!
  ──────────────────────────────────────────
  Grid:
  S . . #
  # # . #
  . . . .
  . # . E

  BFS from S → expand layer by layer:
  Layer 0: S at (0,0)
  Layer 1: (0,1)
  Layer 2: (0,2)
  Layer 3: (1,2)
  Layer 4: (2,2),(2,1),(2,0)? let's see...

  Shortest path: 8 steps
  S→(0,1)→(0,2)→(1,2)→(2,2)→(2,3)→(3,3)=E → 5 steps? 
  Check: (2,3) exists and (3,3)=E ✓
  Actually 7 steps total.
```

A ghost is trapped in a **grid maze**. `S` = start, `E` = exit, `#` = wall, `.` = free space. Find the **minimum steps** to escape. Each step moves to an adjacent cell (up/down/left/right). Output `-1` if no escape exists.

---

### 📥 Input

```
R  C         ← grid dimensions (rows × columns)
row₁         ← first row of grid
row₂
…
```

### 📤 Output

```
[minimum steps, or -1 if impossible]
```

---

### 🧪 Examples

| Input | Output |
|---|---|
| `4 4`↵`S..#`↵`##.#`↵`....`↵`.#.E` | `6` |
| `2 2`↵`S#`↵`#E` | `-1` |
| `1 2`↵`SE` | `1` |

**Constraint:** $1 \leq R, C \leq 50$
