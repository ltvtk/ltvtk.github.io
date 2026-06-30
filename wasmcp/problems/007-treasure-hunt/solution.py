A = int(input())
B = int(input())
C = int(input())

before_gap_tooth = (C // (B - 1)) * B
original         = (before_gap_tooth // (A - 1)) * A
print(original)
