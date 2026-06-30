# input pattern: N on line 1, X on line 2, then N sorted integers each on own line
n = int(input())
x = int(input())
a = [int(input()) for _ in range(n)]
lo, hi = 0, n - 1
ans = -1
while lo <= hi:
    mid = (lo + hi) // 2
    if a[mid] == x:
        ans = mid
        hi = mid - 1
    elif a[mid] < x:
        lo = mid + 1
    else:
        hi = mid - 1
print(ans)
