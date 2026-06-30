## Theory: Binary Exponentiation (Fast Power)

Square the base repeatedly, multiplying into the result only for set bits of E.

```python
B = int(input())
E = int(input())
M = int(input())
result = 1
B = B % M
while E > 0:
    if E % 2 == 1:
        result = (result * B) % M
    B = (B * B) % M
    E //= 2
print(result)
```

**How it works:** Write E in binary. For each bit of E (from LSB to MSB):
- If the bit is 1, multiply the current power into result.
- Square the base for the next bit.

This uses only O(log E) multiplications — for E = 10⁹, only about 30 multiplications!

**Special cases:**
- B⁰ = 1 for any B (even B = 0).
- 0^E = 0 for E > 0.
- Python has `pow(B, E, M)` which does this automatically.
