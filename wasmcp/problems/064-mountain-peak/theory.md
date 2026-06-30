## Theory: Linear Scan for Peak

Scan from right to left (index N-2 down to 1). The first index i where h[i] >= h[i-1] and h[i] >= h[i+1] is the rightmost peak.

```python
n = int(input())
h = list(map(int, input().split()))
ans = None
for i in range(n - 2, 0, -1):
    if h[i] >= h[i - 1] and h[i] >= h[i + 1]:
        ans = h[i]
        break
print(ans if ans is not None else "Impossible")
```

**Key points:**
- First (index 0) and last (index N-1) elements cannot be peaks — they have only one neighbor.
- Scanning right-to-left finds the rightmost peak immediately (break on first find).
- Time: O(N) — one pass through the array.
- Use `>=` not `>`: a peak must be ≥ both neighbors (equal is fine).
