## Theory: Four-Way Classification

Use `if/elif/elif/else` to classify into 4 or more categories.

```python
a = int(input())
if a < 24:
    print("Newborn")
elif a < 72:
    print("Preschool")
elif a <= 144:
    print("School")
else:
    print("Teen")
```

**Key facts:**
- Check ranges from smallest to largest — each `elif` already knows the previous checks failed.
- When we reach `elif a < 72`, we know `a >= 24` from the failed `if`. So it covers 24 ≤ A < 72.
- When we reach `elif a <= 144`, we know `a >= 72`. So it covers 72 ≤ A ≤ 144.
- `else` catches `a > 144` — the Teen room.
- Critical boundaries: 24 (Newborn/Preschool), 72 (Preschool/School), 144 (School/Teen).
