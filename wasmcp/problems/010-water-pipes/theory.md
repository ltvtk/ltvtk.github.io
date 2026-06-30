## Theory: Work Problems with Three Workers

When three sources work simultaneously, their rates **add**:

$$\text{combined rate} = \frac{1}{A} + \frac{1}{B} + \frac{1}{C}$$

**Time to finish** = $\frac{1}{\text{combined rate}} = \frac{1}{\frac{1}{A}+\frac{1}{B}+\frac{1}{C}}$

Add the fractions step by step to avoid floating point:

```python
import math

A = int(input())
B = int(input())
C = int(input())

# Step 1: 1/A + 1/B = (B+A)/(A*B)
num12 = B + A
den12 = A * B

# Step 2: add 1/C = (num12*C + den12) / (den12*C)
total_num = num12 * C + den12
total_den = den12 * C

# Flip: time = total_den / total_num
num = total_den
den = total_num
g   = math.gcd(num, den)
print(num // g, den // g)
```

**Note:** This is the ancient Greek problem of **Polyphemus** — how long until a cistern fills when fed by three streams of different speeds.
