# input pattern: two integers on separate lines
a = int(input())
b = int(input())
while b:
    a, b = b, a % b
print(a)
