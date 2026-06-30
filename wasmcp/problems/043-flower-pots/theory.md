## Theory: Rounding Up with Modulo

Find how many items are missing to complete the last group.

```python
n = int(input())
m = int(input())
r = n % m
if r == 0:
    print(0)
else:
    print(m - r)
```

**Key facts:**
- `n % m` is the remainder — how many seedlings are "dangling" in an incomplete pot.
- If the remainder is 0, N already fills pots perfectly: buy 0 more.
- If the remainder is `r`, you need `m - r` more to complete the last pot.
- Example: N=47, M=4 → remainder=3 → need 4-3=1 more → 48 seedlings fill 12 pots perfectly.
- This trick of `m - (n % m)` is used in many rounding-up problems.
