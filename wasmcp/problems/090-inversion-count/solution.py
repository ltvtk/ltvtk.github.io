# input pattern: N on line 1, then N integers each on own line
n = int(input())
a = [int(input()) for _ in range(n)]
count = 0
for i in range(n):
    for j in range(i + 1, n):
        if a[i] > a[j]:
            count += 1
print(count)
