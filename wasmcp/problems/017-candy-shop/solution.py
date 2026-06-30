M = int(input())
A = int(input())
B = int(input())

opt1 = M // A
combos = M // B
opt2 = combos * 2 + (M % B) // A
print(max(opt1, opt2))
