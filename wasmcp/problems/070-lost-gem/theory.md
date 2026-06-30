## Theory: Set Membership Check

Put all values into a set, then check 1, 2, 3, … until you find one not in the set.

```python
n = int(input())
a = set(map(int, input().split()))
mex = 1
while mex in a:
    mex += 1
print(mex)
```

**Key insight:**
- The MEX is at most N+1 (if the collection contains exactly 1, 2, …, N).
- Using a `set` makes each membership check O(1).
- The while loop runs at most N+1 times.
- Total time: O(N) — build set + at most N+1 checks.

**Why a set, not a list?**
- `mex in list` checks every element → O(N) per check → O(N²) total.
- `mex in set` uses hashing → O(1) per check → O(N) total.
