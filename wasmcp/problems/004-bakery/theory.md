## Theory: Multiplication

Multiplication in Python uses the `*` operator:

```python
P = int(input())
N = int(input())
print(P * N)
```

**Overflow note:** $P \times N$ can be up to $10^6 \times 10^5 = 10^{11}$, which overflows a 32-bit integer. Python handles this automatically (arbitrary precision). In C++, always use `long long` when the product can exceed ~$2 \times 10^9$.
