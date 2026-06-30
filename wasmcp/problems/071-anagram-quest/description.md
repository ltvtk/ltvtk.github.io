## Level 4-071 · Anagram Quest

```
  🗺️  Two treasure maps — same letters, different order?
  ─────────────────────────────────────────────────────
  Map A: "listen"  →  sorted: a c e i l n s t
  Map B: "silent"  →  sorted: a c e i l n s t
                                ↕ identical!
  
  → YES, they are anagrams!

  Map A: "hello"
  Map B: "world"
  → letters differ → NOT anagrams
```

Two treasure maps are **anagrams** if one is a rearrangement of the other (same letters, same counts). Check if the two given words are anagrams.

---

### 📥 Input

```
word1   ← first word (lowercase letters only)
word2   ← second word
```

### 📤 Output

```
Yes
```
or
```
No
```

---

### 🧪 Examples

| Input | Output |
|---|---|
| `listen`↵`silent` | `Yes` |
| `hello`↵`world` | `No` |
| `abc`↵`bca` | `Yes` |

**Constraint:** $1 \leq \text{len(word)} \leq 1{,}000$, lowercase letters only
