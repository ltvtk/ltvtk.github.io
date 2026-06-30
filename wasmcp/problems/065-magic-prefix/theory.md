## Theory: Prefix Sums

Build a prefix array P where P[i] = a[0] + a[1] + … + a[i-1]. Then sum(L..R) = P[R+1] - P[L].

```python
n = int(input())
a = list(map(int, input().split()))
P = [0] * (n + 1)
for i in range(n):
    P[i + 1] = P[i] + a[i]
q = int(input())
for _ in range(q):
    l, r = map(int, input().split())
    print(P[r + 1] - P[l])
```

**Key insight:**
- Build prefix array once in O(N).
- Each query answered in O(1) by subtraction.
- Without prefix sums: O(N) per query → O(N×Q) total (too slow for large inputs).
- With prefix sums: O(N + Q) total.
