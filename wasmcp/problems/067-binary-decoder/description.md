## Level 4-067 · Binary Decoder

```
  🤖 Ancient robots speak in binary!
  ────────────────────────────────────
  Binary:  1 0 1 1 0 1
           ↑           ← most significant bit (leftmost)

  Decode:  1×2⁵ + 0×2⁴ + 1×2³ + 1×2² + 0×2¹ + 1×2⁰
         =  32  +   0  +   8  +   4  +   0  +   1
         =  45

  Quick check: read left to right, double + add bit
    0→1→2→5→11→22→45  ✓
```

An ancient robot left you a message as a **binary string** (only '0' and '1'). Decode it into the decimal number it represents.

---

### 📥 Input

```
b     ← a binary string (only '0' and '1', no leading zeros except "0" itself)
```

### 📤 Output

```
[decimal value]
```

---

### 🧪 Examples

| Input | Output |
|---|---|
| `101101` | `45` |
| `0` | `0` |
| `1` | `1` |
| `11111111` | `255` |

**Constraint:** $1 \leq \text{len}(b) \leq 30$
