## Theory: Greedy Optimization — Try Both Strategies

When choosing between two options, a smart strategy is to **try both** and pick the better result.

**Strategy 1 — All singles:**  
Buy as many single candies as possible: `M // A` candies.

**Strategy 2 — Max combos, then singles:**  
Spend as much as possible on combos, then use leftover coins on singles.

```python
M = int(input())
A = int(input())
B = int(input())

opt1 = M // A                      # all singles
combos = M // B
opt2 = combos * 2 + (M % B) // A  # max combos + leftover singles
print(max(opt1, opt2))
```

**Why does this work?**

- If the combo price per candy (B/2) is **cheaper** than a single (A), opt2 wins.
- If singles are cheaper, opt1 wins.
- Taking the `max` covers both cases without needing to compare prices explicitly.

**Example:** M=16, A=5, B=8
- opt1 = 16//5 = 3 candies
- combos = 16//8 = 2, remainder = 0, opt2 = 2×2 + 0 = 4 candies
- max(3, 4) = **4** ✓

**Real-world use:** This "try both, pick max" approach is a core idea in greedy algorithms used in shopping apps, optimization, and game AI.
