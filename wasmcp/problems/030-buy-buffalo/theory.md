## Theory: Unitary Method — Scale, Compare, Count

**Key insight:** Convert plan 2 to a "per 7-group" rate, then compare with plan 1.

**Step 1:** If 9 families pay C per group, how much would 7 families pay?
$$\text{rate per 7} = \frac{C}{9} \times 7$$

**Step 2:** Each 7-group now pays more than before (plan 1). The extra per group:
$$\text{diff} = \frac{7C}{9} - A$$

**Step 3:** Switching from "short B" to "surplus D" changes the total by $(B + D)$. This change comes from `groups` groups each adding `diff` more:
$$\text{groups} = \frac{B + D}{\text{diff}}$$

**Step 4:** Families = groups × 7. Price = groups × A + B.

```python
A = int(input())
B = int(input())
C = int(input())
D = int(input())

rate  = (C // 9) * 7
diff  = rate - A
groups = (B + D) // diff
print(groups * 7, groups * A + B, sep=",")
```

**Verify A=190, B=330, C=270, D=30:**
- rate = (270//9)×7 = 30×7 = 210
- diff = 210−190 = 20
- groups = (330+30)//20 = 18
- families = 18×7 = **126** ✓
- price = 18×190+330 = **3750** ✓
