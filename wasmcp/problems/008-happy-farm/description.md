## 🎮 Level 1-8 · Happy Farm

```
  🐔 = 1 head,  2 legs
  🐶 = 1 head,  4 legs

  Grandpa sees:
    M heads  👀
    N legs   👣

  🐔 × ?  +  🐶 × ?  =  ???
```

Grandpa can't see what's behind the fence — only heads and legs!

**Figure out how many chickens and dogs are on the farm.**

---

### 📥 Input

```
M    ← total heads
N    ← total legs
```

### 📤 Output

```
[chickens] [dogs]
```

---

### 🔑 The Trick — Assume All Chickens!

```
If all M animals were chickens → expected legs = M × 2
Extra legs = N - M×2
Each dog has 2 extra legs vs a chicken
Dogs = (N - M×2) ÷ 2
Chickens = M - Dogs
```

---

### 🧪 Examples

| M | N | Output |
|---|---|---|
| `36` | `100` | `22 14` |
| `5` | `10` | `5 0` |
| `5` | `20` | `0 5` |

**Constraint:** $1 \leq M \leq 100{,}000,\quad 2M \leq N \leq 4M$
