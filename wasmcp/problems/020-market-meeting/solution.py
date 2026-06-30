import math

Ta = int(input())
Tb = int(input())

num = Ta * Tb
den = Ta + Tb
g   = math.gcd(num, den)
print(num // g, den // g)
