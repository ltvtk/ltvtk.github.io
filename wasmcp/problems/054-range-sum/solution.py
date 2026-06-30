# input pattern: two integers on separate lines (start A, end B)
a = int(input())
b = int(input())
total = 0
for i in range(a, b + 1):
    total += i
print(total)
