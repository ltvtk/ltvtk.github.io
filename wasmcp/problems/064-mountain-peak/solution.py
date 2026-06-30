# input pattern: N on line 1, then N integers each on own line
n = int(input())
h = [int(input()) for _ in range(n)]
ans = None
for i in range(n - 2, 0, -1):
    if h[i] >= h[i - 1] and h[i] >= h[i + 1]:
        ans = h[i]
        break
print(ans if ans is not None else "Impossible")
