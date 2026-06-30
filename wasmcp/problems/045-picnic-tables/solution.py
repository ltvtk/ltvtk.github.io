# input pattern: single integer N (number of students)
n = int(input())
tables = (n + 5) // 6
empty = tables * 6 - n
print(tables, empty)
