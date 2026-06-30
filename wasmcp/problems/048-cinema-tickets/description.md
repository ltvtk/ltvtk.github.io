## 🎮 Level 2-048 · Cinema Tickets

```
  🎬 Height → Ticket Type
  ─────────────────────────
   H < 110 cm  →  FREE  🆓
  110 ≤ H ≤ 130 → CHILD 🧒
   H > 130 cm  → ADULT  🧑
  ─────────────────────────
     90cm  120cm  145cm
      🆓    🧒     🧑
```

The movie theater checks visitors' heights to set ticket prices.
Under 110 cm enters **free**, 110–130 cm gets a **child** ticket, and over 130 cm pays **adult** price.
Help the ticket checker sort the queue!

---

### 📥 Input

```
H    ← visitor's height in cm
```

### 📤 Output

```
FREE     (if H < 110)
CHILD    (if 110 ≤ H ≤ 130)
ADULT    (if H > 130)
```

---

### 🧪 Examples

| Input | Output |
|---|---|
| `120` | `CHILD` |
| `105` | `FREE` |
| `145` | `ADULT` |

**Constraint:** $1 \leq H \leq 250$
