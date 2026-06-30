## Theory: O(N²) Brute Force — Count All Pairs

For each pair (i, j) with i < j, check if a[i] > a[j].

```python
n = int(input())
a = list(map(int, input().split()))
count = 0
for i in range(n):
    for j in range(i + 1, n):
        if a[i] > a[j]:
            count += 1
print(count)
```

**Time: O(N²)** — for N = 1000, about 500,000 comparisons. Fast enough.

**Maximum inversions:** For a reverse-sorted array [N, N-1, …, 2, 1], every pair is an inversion → N×(N-1)/2 inversions total.

**Connection to sorting:** Inversions = minimum number of adjacent swaps needed to sort the array (bubble sort steps). A sorted array has 0 inversions; a reverse-sorted array of N elements has N(N-1)/2.

**Faster O(N log N) solution** exists using merge sort — merge step counts inversions while sorting. This is a beautiful advanced technique!
