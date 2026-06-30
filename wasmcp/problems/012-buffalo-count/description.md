## 🎮 Level 2-12 · Buffalo Count

```
  👴 Grandpa Bi counts buffaloes — but only sees their HORNS!

  🦬🦬       = 4 horns  →  2 buffaloes ✅
  🦬🦬🦬     = 6 horns  →  3 buffaloes ✅
  🦬🦬🦬?    = 7 horns  →  ??? ← ODD number! ❌ ERROR!

  Every buffalo has exactly 2 horns.
  An odd total = Bi made a mistake!
```

Bi counted **S horns** on the field. Figure out how many buffaloes there
are — or catch Bi's counting error!

---

### 📥 Input

```
S    ← total horns counted
```

### 📤 Output

```
[number of buffaloes]
```

If S is **odd** (impossible!), print `-1`.
Otherwise print `S / 2`.

---

### 🧪 Examples

| S | Output |
|---|---|
| `8` | `4` |
| `9` | `-1` |
| `2` | `1` |

**Constraint:** $1 \leq S \leq 1{,}000{,}000$
