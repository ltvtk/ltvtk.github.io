## Theory: Backtracking — Try Each Column Per Row

Place queens one row at a time. For each row, try each column. Skip if attacked.

```python
n = int(input())
cols = set()
diag1 = set()   # row - col = constant for \ diagonals
diag2 = set()   # row + col = constant for / diagonals
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
```

**Three conflict checks:**
1. Same column: `col in cols`
2. Same `\` diagonal: `row - col` is constant along `\` diagonal
3. Same `/` diagonal: `row + col` is constant along `/` diagonal

**Backtracking:** If placing a queen in position (row, col) leads to a dead end, "undo" the placement (remove from sets) and try the next column.

Time: much less than N^N — pruning eliminates most branches early.
