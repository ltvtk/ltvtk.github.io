import math

A = int(input())
B = int(input())
C = int(input())

num12 = B + A
den12 = A * B

total_num = num12 * C + den12
total_den = den12 * C

num = total_den
den = total_num
g   = math.gcd(num, den)
print(num // g, den // g)
