## 🎮 Level 2-11 · Clown's Circus

```
  🎪  ══════════════════════════════  🎪
         🤡  C L O W N ' S   C I R C U S  🤡
  🎪  ══════════════════════════════  🎪

       Gate check ── How old are you?

       Age  < 10  →  🆓  FREE!
       Age ≥ 10  →  💵  Pay your age!
```

Chuckles the Clown runs a magical circus. His pricing rule is simple:
kids under 10 enter **free**, everyone else pays a number of coins
equal to their **age**.

**How much does the visitor pay?**

---

### 📥 Input

```
N    ← visitor's age
```

### 📤 Output

```
[coins to pay]
```

`0` if free. Otherwise the age.

---

### 🧪 Examples

| Age N | Output |
|---|---|
| `9` | `0` |
| `12` | `12` |
| `10` | `10` |

**Constraint:** $1 \leq N \leq 1{,}000{,}000$
