## 🎮 Level 1-033 · Citizen Card

```
  ╔══════════════════════╗
  ║  🎫 ROBOT CITY PASS  ║
  ║  NAME: Nguyen Van An ║
  ║  AGE:  10            ║
  ║  HEIGHT: 1.45 m      ║
  ╚══════════════════════╝
```

To visit Robot City, every tourist must register a citizen card.
Robot Bo collects each visitor's name, age, and height — then prints the official card.
Help Bo fill in and print the card correctly!

---

### 📥 Input

```
name      ← visitor's full name (may contain spaces)
age       ← age in years (integer)
height    ← height in meters (decimal, e.g. 1.45)
```

### 📤 Output

```
NAME: [name]
AGE: [age]
HEIGHT: [height] m
```

---

### 🧪 Examples

| Input | Output |
|---|---|
| `Nguyen Van An`↵`10`↵`1.45` | `NAME: Nguyen Van An`↵`AGE: 10`↵`HEIGHT: 1.45 m` |
| `Alice`↵`8`↵`1.30` | `NAME: Alice`↵`AGE: 8`↵`HEIGHT: 1.30 m` |

**Constraint:** Name is 1–50 characters; age is 1–18; height is a decimal string like `1.45`.
