## Theory: Multiple print() Calls and String Formatting

Each call to `print()` outputs one line. To print 4 lines, call `print()` four times.

```python
name = input()
cls = input()
print("---")
print("NAME:", name)
print("CLASS:", cls)
print("---")
```

**Key facts:**
- `print("NAME:", name)` prints the label `NAME:` then a space then the value of `name`.
- Read each input on its own line using separate `input()` calls.
- Avoid using `class` as a variable name — it is a reserved word in Python. Use `cls` instead.
- The order of `print()` calls determines the order of output lines.
