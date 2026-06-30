## Theory: Unit Conversion

Convert minutes to seconds by multiplying by 60, then add the remaining seconds.

```python
m = int(input())
s = int(input())
print(m * 60 + s)
```

**Key facts:**
- 1 minute = 60 seconds. This is a fixed conversion factor.
- Total seconds = (minutes × 60) + extra seconds.
- This pattern appears everywhere: hours→minutes, days→hours, km→m, etc.
- Multiplication happens before addition (order of operations), so `m * 60 + s` is safe without parentheses.
- When M=0, the answer is just S (no minutes to convert).
