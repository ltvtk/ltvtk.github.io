## Theory: The Fibonacci Sequence

Each Fibonacci number is the sum of the two before it.

```python
n = int(input())
a, b = 1, 1
for _ in range(n - 1):
    a, b = b, a + b
print(a)
```

**Key facts:**
- F(1)=1, F(2)=1, F(3)=2, F(4)=3, F(5)=5, F(6)=8, ...
- Keep only the last two values (`a` and `b`) — you don't need all previous ones.
- `a, b = b, a + b` updates both values at once (Python evaluates the right side before assigning).
- After 0 steps (n=1), `a=1` is already the answer. The loop runs n-1 times total.
- F(30) = 832,040 — still a small number for Python to handle.
