## Theory: Range Classification with Negative Numbers

`if/elif/else` works just as well with negative numbers and decimal thresholds.

```python
t = int(input())
if t < 15:
    print("Wear Jacket")
elif t <= 25:
    print("Wear Sweater")
else:
    print("Wear T-Shirt")
```

**Key facts:**
- Negative integers like `-10` are valid input — `int(input())` handles them fine.
- Boundary values: T=15 → Sweater (not Jacket), T=25 → Sweater (not T-Shirt), T=26 → T-Shirt.
- Check conditions from lowest to highest to avoid gaps or overlaps.
- The `else` handles everything not caught by `if` or `elif` — no need to specify T > 25 explicitly.
- This kind of problem appears in weather apps, thermostats, and health monitors.
