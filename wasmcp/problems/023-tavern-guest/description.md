## 🎮 Level 3-23 · Tavern Guest

```
  💰 Start with ??? coins.

  🍺 Tavern 1 owner:  doubles your money, then takes Y coins.
  🍺 Tavern 2 owner:  doubles your money, then takes Y coins.
  🍺 Tavern 3 owner:  doubles your money, then takes Y coins.

  😭 Zero coins left!

  Work backward to find starting money.
```

At each tavern: owner **doubles** your coins, then **takes Y coins** as fee.
After all 3 taverns the wanderer has **nothing left**.

**How many coins did he start with?**

---

### 🔑 Reverse trick

Going **forward**: `money → money × 2 − Y`  
Going **backward**: `previous = (current + Y) ÷ 2`

---

### 📥 Input

```
Y    ← fee charged at each tavern
```

### 📤 Output

```
[starting coins]
```

---

### 🧪 Examples

| Y | Output |
|---|---|
| `8` | `7` |
| `16` | `14` |

**Constraint:** $Y$ is divisible by 8. $1 \leq Y \leq 1{,}000{,}000$
