## Theory: Solving a One-Step Linear Equation

Grandma's clue gives us an equation. Let $G$ = Grandma's age:

$$G + 5 = 2X \implies G = 2X - 5$$

Then the birth year:

$$\text{birth} = Y - G$$

```python
Y = int(input())
X = int(input())
G = 2 * X - 5
print(G, Y - G)
```

**Worked example:** Y=2024, X=35
- G = 2×35 − 5 = 70 − 5 = **65**
- birth = 2024 − 65 = **1959**
- Output: `65 1959` ✓

**Reading word problems:**
1. Assign a letter to the unknown ($G$ for Grandma's age).
2. Translate the riddle into an equation: "5 years older" → $G+5$; "twice my age" → $2X$.
3. Solve the equation algebraically.
4. Use the result for any follow-up calculations (birth year).

**Age puzzle tip:** The **difference** between two people's ages never changes — only their sum increases each year. This is why Grandma's riddle is always solvable no matter what year it is!
