## Theory: If / Else Branching

Real programs must make **decisions**. Python's `if/else` lets code follow two different paths:

```python
if condition:
    # runs when condition is True
else:
    # runs when condition is False
```

For this problem:

```python
N = int(input())
if N < 10:
    print(0)
else:
    print(N)
```

**Comparison operators** used in conditions:

| Operator | Meaning | Example |
|---|---|---|
| `<` | less than | `N < 10` |
| `>=` | greater than or equal | `N >= 10` |
| `==` | equal | `N == 0` |
| `!=` | not equal | `N != 5` |

**Key insight:** `if N < 10` and `else` together cover **every** possible age — there is no number that slips through. Writing airtight conditions is fundamental to bug-free code.
