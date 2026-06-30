import math

A = int(input())
B = int(input())
C = int(input())
D = int(input())

arm_eye_num = A + B
arm_eye_den = A * B
total_num = arm_eye_num * C + D * arm_eye_den
total_den = arm_eye_den * C
g = math.gcd(total_den, total_num)
print(total_den // g, total_num // g)
