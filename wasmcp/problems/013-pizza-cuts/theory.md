## Theory: Finding a Pattern

When K cuts all pass through the **center**, each cut is a full diameter that splits the circle into two symmetric halves.

Each new cut line creates exactly 2 new wedge-shaped slices:

| K cuts | Slices |
|---|---|
| 1 | 2 |
| 2 | 4 |
| 3 | 6 |
| 4 | 8 |

Pattern: **slices = K × 2**

```python
K = int(input())
print(K * 2)
```

**Why does every cut add exactly 2?**  
A diameter divides the circle into 2 equal parts. Two diameters make 4 sectors, three make 6, and so on. Each additional diameter always creates exactly 2 new sectors regardless of angle — as long as it passes through the center and doesn't overlap an existing cut.

**Math connection:** This is a special case of the general "pizza theorem" studied in geometry.
