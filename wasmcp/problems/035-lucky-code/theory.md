## Theory: String Indexing

In Python, strings are sequences of characters. Each character has an **index** starting from 0.

```python
s = input()
print(s[6])   # the 7th character (index 6)
```

**Key facts:**
- Index 0 is the **first** character; index 6 is the **seventh** character.
- The rule: **position N** (1-based) = **index N-1** (0-based).
- `s[6]` accesses position 7 because 7 - 1 = 6.
- If `s = "Tiger12345"`, then `s[0]='T'`, `s[1]='i'`, ..., `s[6]='2'`.
- Trying to access an index ≥ len(s) causes an `IndexError`.
