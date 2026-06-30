## Theory: Binary Search

Maintain lo and hi pointers. Each step halves the search range by comparing with the midpoint.

```python
n, x = map(int, input().split())
a = list(map(int, input().split()))
lo, hi = 0, n - 1
ans = -1
while lo <= hi:
    mid = (lo + hi) // 2
    if a[mid] == x:
        ans = mid
        hi = mid - 1    # keep searching left for first occurrence
    elif a[mid] < x:
        lo = mid + 1
    else:
        hi = mid - 1
print(ans)
```

**Key ideas:**
- Each step eliminates half the remaining elements.
- Time: O(log N) — for N = 10⁵, only ~17 comparisons!
- `hi = mid - 1` after finding X ensures we find the leftmost occurrence.
- Python built-in: `bisect.bisect_left(a, x)` does this automatically.

**Why binary search only works on sorted arrays:**
- We use the comparison to eliminate HALF the elements.
- In an unsorted array, knowing mid < X tells us nothing about the right half.
