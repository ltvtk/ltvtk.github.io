## Theory: Frequency Count / Sort Comparison

Two words are anagrams if and only if they have the same character frequencies (or equivalently, the same sorted character sequence).

```python
w1 = input().strip()
w2 = input().strip()
print("Yes" if sorted(w1) == sorted(w2) else "No")
```

**Alternative: frequency counting (O(N), no sorting):**
```python
from collections import Counter
w1 = input().strip()
w2 = input().strip()
print("Yes" if Counter(w1) == Counter(w2) else "No")
```

**Key points:**
- If the two words have different lengths, they cannot be anagrams.
- `sorted()` returns a list of characters in alphabetical order.
- Comparing sorted lists checks if all characters and counts match.
- Time: O(N log N) for sorting, or O(N) with Counter.
