## Theory: Cyclic Patterns with Modulo

Use `%` to find the position in a repeating cycle.

```python
k = int(input())
r = k % 3
if r == 1:
    print("Red")
elif r == 2:
    print("Blue")
else:
    print("Yellow")
```

**Key facts:**
- A period-3 cycle means every group of 3 positions repeats the same colors.
- `k % 3` gives the position within the cycle: 1, 2, or 0 (0 means the end of a group).
- Remainder 1 → Red, remainder 2 → Blue, remainder 0 → Yellow.
- This works for any K, even K=1,000,000: just check the remainder!
- Modulo is the key tool for any repeating pattern problem.
