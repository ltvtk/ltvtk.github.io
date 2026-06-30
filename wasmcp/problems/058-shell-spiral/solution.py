# input pattern: single integer N (ring number, 1-30)
n = int(input())
a, b = 1, 1
for _ in range(n - 1):
    a, b = b, a + b
print(a)
