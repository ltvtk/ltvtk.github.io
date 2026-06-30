## Theory: The if/else Statement

Use `if/else` to choose between two different outputs based on a condition.

```python
x = int(input())
if x == 25:
    print("Merry Christmas")
else:
    print("Hi")
```

**Key facts:**
- `==` checks equality (two equals signs). Do not confuse with `=` which assigns a value.
- If the condition is `True`, the `if` block runs. Otherwise the `else` block runs — never both.
- Always convert the input to `int()` before comparing it to a number.
- Indentation (4 spaces) is required — Python uses it to define which lines belong to each block.
- Only one branch executes per run, no matter what.
