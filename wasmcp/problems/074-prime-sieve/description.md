## Level 5-074 · Prime Sieve

```
  🔭 Merlin's Sieve filters out all non-primes up to N!
  ───────────────────────────────────────────────────────
  N = 20:
  Start: 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20
  
  Cross out multiples of 2: ×4 ×6 ×8 ×10 ×12 ×14 ×16 ×18 ×20
  Cross out multiples of 3: ×9 ×15
  Cross out multiples of 5: (×25 too big, stop!)
  
  Survivors: 2 3 5 7 11 13 17 19  →  Count = 8
```

Merlin's magical sieve removes all composite (non-prime) numbers up to **N**, leaving only primes. How many primes survive?

---

### 📥 Input

```
N     ← upper limit
```

### 📤 Output

```
[count of primes from 2 to N inclusive]
```

---

### 🧪 Examples

| Input | Output |
|---|---|
| `20` | `8` |
| `10` | `4` |
| `2` | `1` |
| `1` | `0` |

**Constraint:** $1 \leq N \leq 10^6$
