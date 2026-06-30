## Level 6-087 · House Bandit

```
  🏚️  Rob houses — never two in a row! (guards notice!)
  ───────────────────────────────────────────────────────
  Houses: [2, 7, 9, 3, 1]

  dp[i] = max gold robbing optimally up to house i

  dp[1] = 2       (rob house 1)
  dp[2] = 7       (rob house 2, skip house 1)
  dp[3] = max(dp[2], dp[1]+9) = max(7, 11) = 11
  dp[4] = max(dp[3], dp[2]+3) = max(11, 10) = 11
  dp[5] = max(dp[4], dp[3]+1) = max(11, 12) = 12

  Best: rob houses 2 and 3 → 7+9 = ... wait:
  actually houses 1,3,5: 2+9+1=12  or houses 2,4: 7+3=10
  Best = 12  ✓
```

A clever bandit robs houses along a street, but can **never rob two adjacent houses** (the guards will catch him). Find the **maximum gold** he can steal.

---

### 📥 Input

```
N             ← number of houses
g₁ g₂ … gN   ← gold in each house
```

### 📤 Output

```
[maximum gold]
```

---

### 🧪 Examples

| Input | Output |
|---|---|
| `5`↵`2 7 9 3 1` | `12` |
| `3`↵`1 2 3` | `4` |
| `1`↵`5` | `5` |

**Constraint:** $1 \leq N \leq 1{,}000$, $0 \leq g_i \leq 10{,}000$
