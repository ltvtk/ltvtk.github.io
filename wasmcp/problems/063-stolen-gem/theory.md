## Theory: The Missing Sum Trick

The numbers 1 to N must sum to N×(N+1)/2 (Gauss formula). Subtract the actual sum to find the missing number.

```python
n = int(input())
a = list(map(int, input().split()))
print(n * (n + 1) // 2 - sum(a))
```

**Key insight:**
- Expected sum = N(N+1)/2
- Actual sum   = sum of the given N−1 numbers
- Missing      = Expected − Actual
- Time: O(N) — one pass through the array
- No nested loops needed (unlike an O(N²) "check if i is in list" approach)
