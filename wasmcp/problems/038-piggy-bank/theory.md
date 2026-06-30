## Theory: Multiplication and Addition

Combine `*` (multiply) and `+` (add) to compute a weighted sum.

```python
x = int(input())
y = int(input())
z = int(input())
print(x * 1000 + y * 2000 + z * 5000)
```

**Key facts:**
- `*` has higher priority than `+` in Python (just like in math), so multiplication happens first.
- Each bill type contributes its **count times its value** to the total.
- This is called a **weighted sum** — each item has a different weight (value).
- Read all three inputs before computing — you cannot print until you have all the data.
- Python handles large numbers automatically, so no worry about overflow.
