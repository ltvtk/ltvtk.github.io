import math

A = int(input())
B = int(input())

num = A * B
den = A + B
g   = math.gcd(num, den)
print(num // g, den // g)
