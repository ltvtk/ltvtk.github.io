## Level 6-088 · Digit Drop

```
  🔢 Minimum steps to reach 0 — subtract any digit!
  ────────────────────────────────────────────────────
  N = 27:
  
  Option A: 27 → 27-7=20 → 20-2=18 → 18-8=10 → 10-1=9 → 9-9=0 = 5 steps
  Option B: 27 → 27-2=25 → 25-5=20 → 20-2=18 → ... longer

  Actually optimal: 27 → 20 (sub 7) → 18 (sub 2) → 10 (sub 8) → 9 (sub 1) → 0 (sub 9)
  = 5 steps? Let's check:
  
  dp[1]=1  dp[2]=1  dp[9]=1  dp[10]=2 (10-1→9→0)
  dp[18]=2 (18-9=9→0)   dp[20]=3 (20-2=18→...)
  dp[27]=? 27-2=25 (dp[25]+1) or 27-7=20 (dp[20]+1=4)
  dp[25]: 25-5=20 (dp[20]+1=4). So dp[27]=min(dp[25]+1, dp[20]+1)=min(5,4)=4

  N=27 → answer: 4
```

Starting with **N**, each step you subtract any **non-zero digit** of the current number. Find the **minimum steps** to reach **0**.

---

### 📥 Input

```
N     ← starting number
```

### 📤 Output

```
[minimum steps to reach 0]
```

---

### 🧪 Examples

| Input | Output |
|---|---|
| `27` | `4` |
| `1` | `1` |
| `10` | `2` |

**Constraint:** $1 \leq N \leq 10{,}000$
