## Theory: Reading a Full Line of Input

Use `input()` to read a whole line — including spaces — from the user.

```python
name = input()
print("Hello", name)
```

**Key facts:**
- `input()` reads everything up to (but not including) the newline.
- `print("Hello", name)` automatically puts a space between `"Hello"` and the value of `name`.
- If you used `print("Hello" + name)` instead, there would be no space — so use the comma form here.
- This pattern works for names with multiple words like `"Nguyen Thuy Chi"`.
