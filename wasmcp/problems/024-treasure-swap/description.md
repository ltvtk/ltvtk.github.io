## 🎮 Level 3-24 · Treasure Swap

```
  ⚖️ The Merchant's Rule:
     9 Gold bars 🟨  =  11 Silver bars ⬜  (same total weight!)

  🔄 Servant's experiment:
     Swap 1 Gold bar OUT, 1 Silver bar IN.
     Gold pile is now X ounces LIGHTER. 📉

  ❓ What does ONE gold bar weigh?
  ❓ What does ONE silver bar weigh?
```

Use the two clues — the **equal-weight rule** and the **swap loss** — to find the exact weight of each bar.

---

### 📥 Input

```
X    ← ounces lost from the gold pile after the swap
```

### 📤 Output

```
[gold weight] [silver weight]
```

Decimal numbers separated by a space.

---

### 🧪 Examples

| X | Output |
|---|---|
| `13` | `71.5 58.5` |
| `1` | `5.5 4.5` |

**Constraint:** $X$ is an odd positive integer. $1 \leq X \leq 999{,}999$
