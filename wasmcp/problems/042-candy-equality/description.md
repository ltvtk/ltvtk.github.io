## 🎮 Level 2-042 · Candy Equality

```
  🍬🍬🍬🍬🍬🍬  N = 6 candies
  ──────────────────
  Ti  Teo  Tun
  🍬🍬  🍬🍬  🍬🍬   → YES, fair!

  🍬🍬🍬🍬🍬  N = 5 candies
  ──────────────────
  Ti  Teo  Tun
  🍬🍬  🍬🍬  🍬 ← one left over → NO
```

An wants to share **N** candies equally among his 3 best friends — Ti, Teo, and Tun — with **NO leftovers**.
Can he divide the candies perfectly?

---

### 📥 Input

```
N    ← total number of candies
```

### 📤 Output

```
YES    (if N is divisible by 3)
NO     (otherwise)
```

---

### 🧪 Examples

| Input | Output |
|---|---|
| `6` | `YES` |
| `5` | `NO` |
| `0` | `YES` |

**Constraint:** $0 \leq N \leq 1{,}000$
