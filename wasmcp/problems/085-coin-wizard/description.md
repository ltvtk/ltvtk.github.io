## Level 6-085 · Coin Wizard

```
  💰 DP Coin Change — greedy fails here!
  ──────────────────────────────────────────
  Coins: {1, 5, 7}   Target: 11

  Greedy (largest first): 7 + 1 + 1 + 1 + 1 = 5 coins  ✗
  DP (optimal):           5 + 5 + 1         = 3 coins  ✓

  DP table for target 11:
  d[0]=0  d[1]=1  d[2]=2  d[3]=3  d[4]=4
  d[5]=1  d[6]=2  d[7]=1  d[8]=2  d[9]=3
  d[10]=2 d[11]=3  ← answer!
```

The Dragon Vault has coins of **N** denominations. Find the **minimum number of coins** to make exactly **X** gold. If impossible, output `-1`.

---

### 📥 Input

```
N  X              ← N coin types, target X
c₁ c₂ … cN       ← coin values
```

### 📤 Output

```
[minimum coins, or -1 if impossible]
```

---

### 🧪 Examples

| Input | Output |
|---|---|
| `3 11`↵`1 5 7` | `3` |
| `3 12`↵`1 5 7` | `2` |
| `2 7`↵`3 6` | `-1` |

**Constraint:** $1 \leq N \leq 20$, $1 \leq X \leq 10{,}000$, $1 \leq c_i \leq 10{,}000$
