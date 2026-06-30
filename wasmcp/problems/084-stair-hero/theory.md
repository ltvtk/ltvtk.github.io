## Theory: DP — Staircase is Fibonacci

ways(1) = 1 (only: step 1)
ways(2) = 2 (1+1 or 2)
ways(n) = ways(n-1) + ways(n-2)

```python
n = int(input())
if n == 1:
    print(1)
elif n == 2:
    print(2)
else:
    a, b = 1, 2
    for i in range(3, n + 1):
        a, b = b, a + b
    print(b)
```

**Why?** To reach stair N, the hero either:
- Took a 1-step from stair N-1 → ways(N-1) choices for how to reach N-1.
- Took a 2-step from stair N-2 → ways(N-2) choices for how to reach N-2.

These two cases are mutually exclusive and exhaustive, so ways(N) = ways(N-1) + ways(N-2).

This is exactly the Fibonacci recurrence! ways(N) = fib(N+1) where fib(1)=1, fib(2)=1.
