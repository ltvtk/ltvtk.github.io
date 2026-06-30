N = int(input())

if N <= 2:
    print(1)
else:
    a, b = 1, 1
    for _ in range(N - 2):
        a, b = b, a + b
    print(b)
