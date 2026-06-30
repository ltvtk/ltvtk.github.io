## 🎮 Level 1-7 · Treasure Hunt

```
  💰 ORIGINAL
      │
      ▼  Pirate 1 👁️ takes 1/A
  💰 REMAINING
      │
      ▼  Pirate 2 🦷 takes 1/B of rest
  💰 LEFT  ←── Captain 🎃 counts: C coins
```

Captain Pumpkin found gold — but two sneaky pirates grabbed fractions of it first!

Work **backwards** from what's left to find the original total.

---

### 📥 Input

```
A    ← Pirate 1 takes 1/A of total
B    ← Pirate 2 takes 1/B of remainder
C    ← Captain's share (what's left)
```

### 📤 Output

```
Original total gold
```

---

### 🔑 Work Backwards

$$\text{before Pirate 2} = C \times \frac{B}{B-1}$$

$$\text{original} = \text{above} \times \frac{A}{A-1}$$

---

### 🧪 Example

```
A=13, B=17, C=192

Before Pirate 2:  192 × 17/16 = 204
Original:          204 × 13/12 = 221  ✓
```

**Constraint:** $2 \leq A, B \leq 1000,\quad 1 \leq C \leq 10^6$. Answer is always a whole number.
