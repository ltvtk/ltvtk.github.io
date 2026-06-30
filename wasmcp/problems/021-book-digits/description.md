## 🎮 Level 3-21 · Book Digits

```
  📖 Prof. Owl's Spellbook has N pages.
  ✂️ Bi must cut digit-labels to number every page.

  Pages  1 –   9 : 1 digit each  →  9  × 1 =    9 digits
  Pages 10 –  99 : 2 digits each → 90  × 2 =  180 digits
  Pages 100 – 999: 3 digits each → 900 × 3 = 2700 digits
               ...
```

**How many digit-labels must Bi cut in total?**

---

### 📥 Input

```
N    ← total pages
```

### 📤 Output

```
[total digits]
```

---

### 🧪 Examples

| N | Output |
|---|---|
| `12` | `15` |
| `9` | `9` |
| `100` | `192` |

*N=12: 9 single-digit pages (9) + 3 two-digit pages (6) = 15.*

**Constraint:** $1 \leq N \leq 100{,}000$
