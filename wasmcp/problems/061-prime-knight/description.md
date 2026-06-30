## 🎮 Level 3-061 · Prime Knight

```
  🛡️ Math Kingdom — Prime Knights
  ─────────────────────────────────
  2  → YES (only 1 and 2 divide it)
  3  → YES
  4  → NO  (2 × 2)
  5  → YES
  6  → NO  (2 × 3)
  7  → YES
  9  → NO  (3 × 3)
  ─────────────────────────────────
```

In the Math Kingdom, prime numbers are honored as **brave knights**.
A number is prime if it is greater than 1 and divisible by **only 1 and itself**.
Is N a prime number knight?

---

### 📥 Input

```
N    ← the number to test
```

### 📤 Output

```
YES    (if N is prime)
NO     (if N is not prime)
```

---

### 🧪 Examples

| Input | Output |
|---|---|
| `7` | `YES` |
| `9` | `NO` |
| `2` | `YES` |
| `1` | `NO` |

**Constraint:** $1 \leq N \leq 1{,}000$
