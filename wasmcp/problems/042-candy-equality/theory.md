## Theory: The Modulo Operator

The `%` operator gives the **remainder** after integer division.

```python
n = int(input())
if n % 3 == 0:
    print("YES")
else:
    print("NO")
```

**Key facts:**
- `n % 3` gives the remainder when N is divided by 3: it's 0, 1, or 2.
- If the remainder is 0, N splits perfectly into 3 equal groups → `YES`.
- `6 % 3 = 0` (yes), `5 % 3 = 2` (no), `0 % 3 = 0` (yes — zero divides evenly into any number of groups).
- Modulo is used to test divisibility: `n % k == 0` means "k divides n evenly".
- You can test divisibility by any number by changing the `3`.
