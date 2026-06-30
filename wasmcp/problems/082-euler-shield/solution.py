# input pattern: single integer N
n = int(input())
result = n
temp = n
d = 2
while d * d <= temp:
    if temp % d == 0:
        while temp % d == 0:
            temp //= d
        result -= result // d
    d += 1
if temp > 1:
    result -= result // temp
print(result)
