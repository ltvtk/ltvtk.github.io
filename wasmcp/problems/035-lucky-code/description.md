## 🎮 Level 1-035 · Lucky Code

```
  Password:  T i g e r 1 2 3 4 5
  Position:  1 2 3 4 5 6 7 8 9 10
                           ↑
                     Lucky char! → '2'
```

Little Miu is setting a secret password for her treasure chest.
She believes that the **7th character** in a 10-character password string brings all the luck!
Help Miu find her lucky character.

---

### 📥 Input

```
S    ← a string of exactly 10 characters (letters and digits, no spaces)
```

### 📤 Output

```
[the 7th character of S]
```

---

### 🧪 Examples

| Input | Output |
|---|---|
| `Tiger12345` | `2` |
| `ABCDEFGHIJ` | `G` |

**Constraint:** $|S| = 10$ (exactly 10 characters, letters and digits only).
