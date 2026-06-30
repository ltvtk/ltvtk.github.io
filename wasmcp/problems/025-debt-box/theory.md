## Theory: Conservation Laws and Logic Checks

In any fair transaction, money going **in** must equal money going **out**:

$$\text{IN} = \text{OUT} \implies B = A + C$$

This is called a **conservation law** — total money is conserved. If it doesn't balance, someone's memory is wrong!

```python
A = int(input())
B = int(input())
C = int(input())
if B == A + C:
    print("OK")
else:
    print("NO")
```

**Bebras logic:** This type of problem — checking whether a set of statements is self-consistent — is the core of the **Bebras informatics challenge** for ages 8–12. The skill: model the real-world situation as a simple equation, then test it.

**Extension:** What if there were more borrowers and lenders? The same rule holds: `sum(borrowed) == sum(lent)`. This generalizes to accounting, physics (conservation of energy), and circuit analysis (Kirchhoff's current law).
