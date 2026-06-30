## Theory: Relative Speed and Catch-Up Problems

When two objects move in the **same direction**, what matters is the **difference** in their speeds — how fast the faster one is closing the gap.

**Relative speed** = $V_t - V_r$ (meters gained per second)

**Time to catch up** = $\dfrac{\text{initial gap}}{V_t - V_r} = \dfrac{R - T}{V_t - V_r}$

**Meeting position** = Rabbit's start + time × Rabbit's speed = $T + \text{time} \times V_t$

```python
R  = int(input())
T  = int(input())
Vt = int(input())
Vr = int(input())

gap  = R - T
rel  = Vt - Vr
time = gap // rel
meet = T + time * Vt
print(time, meet)
```

**Example:** R=10, T=0, Vt=5, Vr=3
- gap = 10, rel = 2
- time = 10 // 2 = 5 seconds
- meet = 0 + 5 × 5 = **mark 25** ✓

**Real-world use:** Police car chasing a speeder, airplane catching a slow cargo flight — all the same formula!
