## Theory: Chained if/elif/else

Use `if/elif/else` to check multiple conditions in order.

```python
h = int(input())
if h < 110:
    print("FREE")
elif h <= 130:
    print("CHILD")
else:
    print("ADULT")
```

**Key facts:**
- Python checks conditions **top to bottom** and runs only the first matching branch.
- Because we already know `h >= 110` when we reach `elif`, we only need to check `h <= 130`.
- Boundary values matter: H=110 → CHILD (not FREE), H=130 → CHILD (not ADULT).
- `elif` is short for "else if" — it only runs if all previous conditions were False.
- Always test the boundary values (110, 130) to make sure your conditions are correct.
