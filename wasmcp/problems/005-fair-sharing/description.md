## 🎮 Level 1-5 · Fair Sharing

```
  🐼 Panda has M = 45 candies 🍬
  👫 N = 7 friends (including himself)

  45 ÷ 7 = 6  ...remainder 3

  Each friend gets:  6 🍬
  Goes to fridge:    3 🍬🥶
```

Panda shares his candies equally. Leftovers go to the fridge.

**How many per friend? How many left over?**

---

### 📥 Input

```
M    ← total candies
N    ← number of friends
```

### 📤 Output

```
[per friend] [leftover]
```

Two numbers separated by a space.

---

### 🧪 Examples

| M | N | Output |
|---|---|---|
| `45` | `7` | `6 3` |
| `100` | `10` | `10 0` |
| `17` | `5` | `3 2` |

**Constraint:** $1 \leq N \leq M \leq 100{,}000$
