## Theory: Three Rates, One Pool

**Rate of each spout** (pool per day):

- Arm: $\dfrac{1}{A}$
- Eye: $\dfrac{1}{B}$
- Mouth: fills in $\dfrac{C}{D}$ days → rate = $\dfrac{D}{C}$ per day

**Add the three rates** using fraction arithmetic:

$$\frac{1}{A} + \frac{1}{B} + \frac{D}{C}$$

**Step 1:** Combine arm + eye:
$$\frac{1}{A}+\frac{1}{B} = \frac{A+B}{AB}$$

**Step 2:** Add mouth rate:
$$\frac{A+B}{AB} + \frac{D}{C} = \frac{(A+B)C + D \cdot AB}{AB \cdot C}$$

**Step 3:** Fill time = reciprocal → $\dfrac{AB \cdot C}{(A+B)C + D \cdot AB}$ — reduce with GCD.

```python
import math

A = int(input())
B = int(input())
C = int(input())
D = int(input())

arm_eye_num = A + B
arm_eye_den = A * B
total_num = arm_eye_num * C + D * arm_eye_den
total_den = arm_eye_den * C
g = math.gcd(total_den, total_num)
print(total_den // g, total_num // g)
```

**Verify A=3, B=2, C=2, D=5:**
- arm_eye = 5/6, total_num = 5×2+5×6 = 40, total_den = 6×2 = 12
- gcd(12,40) = 4 → **3/10** ✓
