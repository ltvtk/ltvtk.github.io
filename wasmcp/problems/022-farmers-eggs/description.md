## 🎮 Level 3-22 · Farmer's Eggs

```
  🧺 Basket starts with ??? eggs

  Customer 1 arrives:
    Takes HALF the basket + 1 free extra → hands over basket
  Customer 2 arrives:
    Takes HALF of what's left + 1 free extra → hands over basket
  Customer 3 arrives:
    Takes HALF of what's left + 1 free extra → hands over basket

  X eggs remain. 🥚×X
```

Work **backwards** from X to find how many eggs were in the basket **at the start**.

---

### 🔑 Reverse trick

Going **forward**: basket → basket − (basket ÷ 2 + 1)  
Going **backward**: current → (current + 1) × 2

---

### 📥 Input

```
X    ← eggs remaining after all 3 customers
```

### 📤 Output

```
[initial egg count]
```

---

### 🧪 Examples

| X | Output |
|---|---|
| `0` | `14` |
| `1` | `22` |

**Constraint:** $0 \leq X \leq 1{,}000{,}000$
