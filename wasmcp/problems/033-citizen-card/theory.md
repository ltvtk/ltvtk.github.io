## Theory: Reading Multiple Lines of Different Types

When inputs are on separate lines, call `input()` once for each line.

```python
name = input()    # reads a string (may have spaces)
age = input()     # read as string — no conversion needed for printing
height = input()  # read as string — no conversion needed for printing
print("NAME:", name)
print("AGE:", age)
print("HEIGHT:", height, "m")
```

**Key facts:**
- If you only need to print a value (not do math with it), you can keep it as a string — no need to convert with `int()` or `float()`.
- `print("HEIGHT:", height, "m")` prints three things separated by spaces: the label, the value, and the unit `m`.
- Reading 3 inputs takes 3 `input()` calls in order — one per line.
- This pattern works for any combination of string, integer, and decimal inputs.
