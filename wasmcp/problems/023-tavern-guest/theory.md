## Theory: Reverse Thinking with Division

**Forward (what happens at each tavern):**  
`money_after = money_before × 2 − Y`

**Reverse (undo each step, starting from 0):**  
`money_before = (money_after + Y) ÷ 2`

```python
Y = int(input())
after_3 = (0 + Y) // 2
after_2 = (after_3 + Y) // 2
start   = (after_2 + Y) // 2
print(start)
```

**Trace for Y=8:**

| After | Value | ← reverse → | Before |
|---|---|---|---|
| Tavern 3 | 0 | (0+8)÷2 | 4 |
| Tavern 2 | 4 | (4+8)÷2 | 6 |
| Tavern 1 | 6 | (6+8)÷2 | **7** |

**Verify forward:** 7→7×2−8=6→6×2−8=4→4×2−8=0 ✓

**Key insight:** The algebraic solution gives `start = 7Y/8`. For Y=8: 7×8/8=7 ✓. This means Y must be divisible by 8 for the answer to be a whole number.

**Nested reverse** is the same "backwards thinking" as the eggs problem — the trick works for ANY sequence of operations, as long as every step is reversible.
