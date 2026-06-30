A = int(input())
B = int(input())
C = int(input())
D = int(input())

rate   = (C // 9) * 7
diff   = rate - A
groups = (B + D) // diff
print(groups * 7, groups * A + B, sep=",")
