## 🎮 Level 1-6 · Super Robot

```
  😢 Each gives A coins → still SHORT by B coins
  🎉 Each gives C coins → LEFTOVER D coins

  ┌─────────────────────────────┐
  │  How many kids?   → ???     │
  │  Robot price?     → ???     │
  └─────────────────────────────┘
```

A class wants to buy a **Super Robot** 🤖 together!

Two contribution plans give different results — find the class size and robot price.

---

### 📥 Input

```
A    ← low contribution
B    ← shortfall (short by B)
C    ← high contribution  (C > A)
D    ← surplus (leftover D)
```

### 📤 Output

```
[kids] [robot price]
```

---

### 🔑 Key Insight

$$\text{kids} = \frac{B + D}{C - A} \qquad \text{price} = \text{kids} \times A + B$$

---

### 🧪 Example

```
Input:  10  15  15  10
          ↓   ↓   ↓   ↓
         A   B   C   D

Output: 5 65
```

*5 kids × 10 coins + 15 shortfall = 65 coins.*

**Constraint:** $1 \leq A < C \leq 10^6,\quad 1 \leq B,D \leq 10^6$
