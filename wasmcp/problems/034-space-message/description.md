## 🎮 Level 1-034 · Space Message

```
  📡 DEEP SPACE DECODER
  ─────────────────────
  Word 1: Hello
  Word 2: Robot
  Word 3: World
       ↓ join ↓
  "Hello Robot World"
```

Space explorers received a 3-word coded message from a distant planet.
The words arrived one per line. To decode it, join the 3 words into one sentence with spaces between them.
Help mission control reassemble the message!

---

### 📥 Input

```
word1    ← first word (no spaces)
word2    ← second word (no spaces)
word3    ← third word (no spaces)
```

### 📤 Output

```
[word1] [word2] [word3]
```

---

### 🧪 Examples

| Input | Output |
|---|---|
| `Hello`↵`Robot`↵`World` | `Hello Robot World` |
| `I`↵`love`↵`coding` | `I love coding` |

**Constraint:** Each word is 1–20 characters with no spaces.
