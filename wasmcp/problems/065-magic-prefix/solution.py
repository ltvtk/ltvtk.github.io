# input pattern: N on line 1, N integers each on own line, Q on next line, then Q queries each L R on own lines
n = int(input())
P = [0] * (n + 1)
for i in range(n):
    P[i + 1] = P[i] + int(input())
q = int(input())
for _ in range(q):
    l = int(input())
    r = int(input())
    print(P[r + 1] - P[l])
