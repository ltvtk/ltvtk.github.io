## 🎮 Level 2-050 · Weather Wear

```
  🌡️ Temperature → Clothing
  ──────────────────────────
   T < 15°C  →  🧥 Jacket
  15 ≤ T ≤ 25 → 🧣 Sweater
   T > 25°C  →  👕 T-Shirt
  ──────────────────────────
    12°C   20°C   30°C
     🧥     🧣     👕
```

Robot Bo cares deeply about everyone's health!
Based on the outdoor temperature, Bo suggests the right clothing.
Help Bo give the perfect advice for any temperature.

---

### 📥 Input

```
T    ← temperature in degrees Celsius
```

### 📤 Output

```
Wear Jacket     (if T < 15)
Wear Sweater    (if 15 ≤ T ≤ 25)
Wear T-Shirt    (if T > 25)
```

---

### 🧪 Examples

| Input | Output |
|---|---|
| `12` | `Wear Jacket` |
| `20` | `Wear Sweater` |
| `30` | `Wear T-Shirt` |

**Constraint:** $-10 \leq T \leq 50$
