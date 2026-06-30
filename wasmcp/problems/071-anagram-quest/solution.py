# input pattern: two words on separate lines
w1 = input().strip()
w2 = input().strip()
print("Yes" if sorted(w1) == sorted(w2) else "No")
