# input pattern: single integer N
n = int(input())
cols = set()
diag1 = set()
diag2 = set()
count = 0

def solve(row):
    global count
    if row == n:
        count += 1
        return
    for col in range(n):
        if col in cols or (row - col) in diag1 or (row + col) in diag2:
            continue
        cols.add(col)
        diag1.add(row - col)
        diag2.add(row + col)
        solve(row + 1)
        cols.remove(col)
        diag1.remove(row - col)
        diag2.remove(row + col)

solve(0)
print(count)
