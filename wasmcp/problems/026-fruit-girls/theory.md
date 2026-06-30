## Theory: Reconstruct Total, Then Divide

Work in two stages:

1. **Find the total** across all 3 girls (before giving).
2. **Divide by 3** to get each girl's share.

**Total given away:** $N \times K$ apples.  
**Total kept:** $3 \times K$ apples (each of 3 girls keeps exactly $K$).  
**Total at start:** $(N \times K) + (3 \times K) = K \times (N + 3)$

**Each girl:** $\dfrac{K(N+3)}{3}$

```python
N = int(input())
K = int(input())
print(K * (N + 3) // 3)
```

**Example N=9, K=2:**
- total_start = 2 × (9+3) = 24
- each girl = 24 ÷ 3 = **8** ✓

**Verify:** Each of 3 girls had 8 apples. Together they gave away 9×2=18 apples. Remaining per girl: 8 − 18÷3 = 8 − 6 = 2 = K ✓

**Origin:** This is an ancient Greek math puzzle attributed to the mathematician **Diophantus** (~250 AD), who loved problems with many unknowns but symmetric solutions.
