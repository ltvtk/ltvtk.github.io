# input pattern: N on line 1, then N integers each on own line
n = int(input())
a = set()
for _ in range(n):
    a.add(int(input()))
mex = 1
while mex in a:
    mex += 1
print(mex)
