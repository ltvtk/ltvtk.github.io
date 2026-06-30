## Theory: Dynamic Programming — Build from Previous States

Store computed values and use them for the next one. No recursion needed.

```python
n = int(input())
if n == 0 or n == 1:
    print(0)
elif n == 2:
    print(1)
else:
    tri = [0, 0, 1]
    for i in range(3, n + 1):
        tri.append(tri[-1] + tri[-2] + tri[-3])
    print(tri[n])
```

**This is Dynamic Programming:** We build each state tri(n) from the three previous states tri(n-1), tri(n-2), tri(n-3).

**Compare with naive recursion:**
- Recursive: computes tri(n) by calling tri(n-1), tri(n-2), tri(n-3) — which each call three more… exponential tree!
- DP: computes each value exactly once, left to right — linear time!

DP rule: if the current state depends on previously computed states, store them and reuse them.
