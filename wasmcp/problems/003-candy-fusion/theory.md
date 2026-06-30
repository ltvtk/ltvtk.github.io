## Theory: Addition and Reading Multiple Lines

Read each value on its own line with `int(input())`:

```python
A = int(input())
B = int(input())
print(A + B)
```

**Alternatively**, if two values are on the same line separated by a space:

```python
A, B = map(int, input().split())
```

`map(int, ...)` converts every token to an integer. `split()` breaks the line on whitespace.

For this problem, each value is on its own line, so read them one at a time.
