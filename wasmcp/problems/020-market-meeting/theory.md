## Theory: Opposite-Direction Meeting and Fraction Reduction

When two objects move **toward each other**, their rates add up.

**Rate of Mrs. A:** $\frac{1}{T_a}$ road/hour  
**Rate of Mrs. B:** $\frac{1}{T_b}$ road/hour  
**Combined rate:** $\frac{1}{T_a} + \frac{1}{T_b} = \frac{T_a + T_b}{T_a \cdot T_b}$

**Time to cover 1 full road** = $1 \div \text{combined rate} = \dfrac{T_a \cdot T_b}{T_a + T_b}$

Reduce the fraction by dividing both numerator and denominator by their **GCD**:

```python
import math

Ta = int(input())
Tb = int(input())

num = Ta * Tb
den = Ta + Tb
g   = math.gcd(num, den)
print(num // g, den // g)
```

**Example:** Ta=2, Tb=3
- num = 6, den = 5, gcd(6,5)=1 → `6 5` (6/5 hours ≈ 1h 12min) ✓

**Example:** Ta=3, Tb=6
- num = 18, den = 9, gcd(18,9)=9 → `2 1` (exactly 2 hours) ✓

**Key insight:** This is the **same formula** as the snail race! Whether it's snails crawling, ladies walking, or pipes filling a tank — the math is always: combine rates, then flip.
