## Theory: Perimeter of a Rectangle

The perimeter is the total distance around the outside of a shape.

```python
l = int(input())
w = int(input())
print(2 * (l + w))
```

**Key facts:**
- A rectangle has 2 sides of length L and 2 sides of length W.
- Perimeter = L + W + L + W = 2 × (L + W).
- Parentheses matter: `2 * (l + w)` adds first then multiplies. `2 * l + w` would be wrong.
- When L = W (a square), perimeter = 4 × L.
- This formula is used in real life: fencing a yard, running a track, framing a picture.
