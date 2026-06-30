## Theory: The Triangle Inequality

Three sides a, b, c form a triangle if and only if every side is strictly less than the sum of the other two.

```python
a = int(input())
b = int(input())
c = int(input())
if a + b > c and a + c > b and b + c > a:
    print("YES")
else:
    print("NO")
```

**Key facts:**
- The triangle inequality: each side must be **strictly less than** the sum of the other two.
- You need to check **all three** combinations: a+b > c, a+c > b, b+c > a.
- If any one fails, a triangle is impossible.
- `and` in Python means both/all conditions must be True.
- Watch out for edge cases: sides 1, 1, 2 → 1+1=2, NOT strictly greater → NO triangle.
