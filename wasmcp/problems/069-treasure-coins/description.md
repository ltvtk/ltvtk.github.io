## Level 4-069 · Treasure Coins

```
  🪙 Dragon Kingdom coin system
  ─────────────────────────────
  Coins: 500  200  100  50  20  10

  Pay bill = 750 gold?
    500 → 250 left
    200 → 50 left
     50 → 0 left
  Total: 3 coins  ✓ minimum!

  Greedy rule: always use the LARGEST coin that fits!
```

In the Dragon Kingdom, coins come in **6 denominations**: 500, 200, 100, 50, 20, and 10. Pay a bill of exactly **B** gold using the **minimum number of coins**. The bill is always a multiple of 10.

---

### 📥 Input

```
B     ← bill amount (multiple of 10)
```

### 📤 Output

```
[minimum number of coins]
```

---

### 🧪 Examples

| Input | Output |
|---|---|
| `750` | `3` |
| `30` | `2` |
| `90` | `3` |

**Constraint:** $10 \leq B \leq 10^9$, $B$ is always a multiple of 10
