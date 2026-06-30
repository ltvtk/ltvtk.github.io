## Theory: Volume Formulas and If/Elif/Else

**Volume of a cube:** $V = A \times A \times A = A^3$  
**Volume of a rectangular box:** $V = L \times W \times H$

Python lets you compare and branch across **three or more** cases with `elif`:

```python
if cube > box:
    # cube wins
elif box > cube:
    # box wins
else:
    # they're equal
```

Full solution:

```python
A = int(input())
L = int(input())
W = int(input())
H = int(input())

cube = A * A * A
box  = L * W * H

if cube > box:
    print("Cube", cube)
elif box > cube:
    print("Box", box)
else:
    print("Equal", cube)
```

**Example 1:** A=3, L=2, W=3, H=4 → cube=27, box=24 → **Cube 27** ✓  
**Example 2:** A=4, L=2, W=4, H=10 → cube=64, box=80 → **Box 80** ✓

**`elif` chain rules:**
- Python checks conditions top to bottom.
- As soon as one is `True`, it runs that block and skips the rest.
- `else` catches everything not covered above.
