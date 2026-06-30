## Theory: Rates and Fractions

**Combined speed:** In one day, Green covers $\frac{1}{A}$ of the road and Red covers $\frac{1}{B}$.

Together they close the gap at rate $\frac{1}{A} + \frac{1}{B} = \frac{A+B}{AB}$ per day.

**Meeting time** = 1 road ÷ combined rate = $\frac{AB}{A+B}$.

Output this as a reduced fraction using GCD:

```python
import math

A = int(input())
B = int(input())

num = A * B
den = A + B
g   = math.gcd(num, den)
print(num // g, den // g)
```

**GCD (Greatest Common Divisor):** The largest number that divides both the numerator and denominator. Dividing both by GCD gives the simplest form.

Example: $\frac{24}{10}$ → GCD(24,10)=2 → $\frac{12}{5}$.

Python's `math.gcd` computes this instantly using the **Euclidean algorithm**, one of the oldest algorithms in mathematics (300 BC).
