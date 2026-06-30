## Level 5-073 · Prime Sentinel

```
  🛡️  The Prime Sentinel blocks all NON-primes!
  ────────────────────────────────────────────────
  N=17: try divisors up to √17 ≈ 4.1
    17 ÷ 2 → no
    17 ÷ 3 → no
    → no divisor found  ✓ PRIME  (passes!)

  N=15: try divisors up to √15 ≈ 3.9
    15 ÷ 2 → no
    15 ÷ 3 = 5  ← divisor found!  ✗ NOT prime  (blocked!)

  Why stop at √N?
  If N = a × b and a ≤ b, then a ≤ √N.
  So any divisor > √N must pair with one ≤ √N.
```

The Prime Sentinel guards the Gateway of Primes. It lets through a number **N** only if it is prime. Is N prime?

---

### 📥 Input

```
N     ← the number to test
```

### 📤 Output

```
Yes
```
or
```
No
```

---

### 🧪 Examples

| Input | Output |
|---|---|
| `17` | `Yes` |
| `15` | `No` |
| `1` | `No` |
| `2` | `Yes` |

**Constraint:** $1 \leq N \leq 10^6$
