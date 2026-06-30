# input pattern: single integer N
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
