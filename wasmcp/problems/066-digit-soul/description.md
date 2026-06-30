## Level 4-066 · Digit Soul

```
  🔮 The Digit Soul of a number
  ──────────────────────────────
  N = 9875
  Step 1: 9+8+7+5 = 29
  Step 2: 2+9 = 11
  Step 3: 1+1 = 2  ← single digit = SOUL!

  N = 0  →  soul = 0
  N = 9  →  soul = 9  (already single digit)
```

An ancient crystal door opens only when fed the **Digit Soul** of a secret number — keep summing all its digits until only one digit remains. Given **N**, find its Digit Soul.

---

### 📥 Input

```
N     ← a non-negative integer
```

### 📤 Output

```
[digit soul of N]
```

---

### 🧪 Examples

| Input | Output |
|---|---|
| `9875` | `2` |
| `0` | `0` |
| `9` | `9` |
| `199` | `1` |

**Constraint:** $0 \leq N \leq 10^{9}$
