## Theory: Classifying into Ranges

Use `if/elif/else` to classify a value into one of several named ranges.

```python
p = int(input())
if p < 50:
    print("White Belt")
elif p < 100:
    print("Blue Belt")
else:
    print("Black Belt")
```

**Key facts:**
- Test from the **lowest** range upward. Once a condition matches, the rest are skipped.
- When we reach `elif p < 100`, we already know `p >= 50`, so this tests 50 ≤ P < 100.
- The `else` catches everything not matched above — here that means P ≥ 100.
- Boundary check: P=50 → Blue Belt (not White), P=99 → Blue Belt (not Black), P=100 → Black Belt.
- Classification by range is one of the most common patterns in programming.
