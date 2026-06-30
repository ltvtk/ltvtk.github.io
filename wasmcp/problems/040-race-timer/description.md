## 🎮 Level 1-040 · Race Timer

```
  ⏱️  ROBOT RACE OFFICIAL TIMER
  ──────────────────────────────
  Robot Bo's time:  2 min 30 sec
  
  Convert to seconds:
  2 × 60 + 30 = 150 seconds
  ──────────────────────────────
```

In the annual Robot Race, all finishing times are recorded in minutes and seconds.
The referee needs to convert every time to **pure seconds** so it's easy to compare.
Robot Bo finished in M minutes and S seconds — what is his total time in seconds?

---

### 📥 Input

```
M    ← minutes (0 ≤ M ≤ 60)
S    ← seconds (0 ≤ S ≤ 59)
```

### 📤 Output

```
[M × 60 + S]
```

---

### 🧪 Examples

| Input | Output |
|---|---|
| `2`↵`30` | `150` |
| `0`↵`45` | `45` |

**Constraint:** $0 \leq M \leq 60$, $0 \leq S \leq 59$
