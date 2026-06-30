## Theory: The Fibonacci Sequence and Loops

The **Fibonacci sequence** is one of the most famous in all of mathematics:
$1, 1, 2, 3, 5, 8, 13, 21, 34, 55, \ldots$

Each term is the **sum of the two before it**: $F(n) = F(n-1) + F(n-2)$

The trick is to use a **for loop** that keeps track of only the last two values — no need to store the entire list:

```python
N = int(input())

if N <= 2:
    print(1)
else:
    a, b = 1, 1
    for _ in range(N - 2):
        a, b = b, a + b
    print(b)
```

**Trace for N=5:**

| Step | a | b |
|---|---|---|
| start | 1 | 1 |
| step 1 | 1 | 2 |
| step 2 | 2 | 3 |
| step 3 | 3 | 5 |
→ prints `5` ✓

**Note:** `a, b = b, a + b` swaps and updates **simultaneously** — Python evaluates the right side first before any assignments happen.

**Found in nature:** Sunflower seeds, pinecone spirals, nautilus shells — Fibonacci numbers appear everywhere in the natural world!
