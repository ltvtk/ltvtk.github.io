# input pattern: single integer A (age in months)
a = int(input())
if a < 24:
    print("Newborn")
elif a < 72:
    print("Preschool")
elif a <= 144:
    print("School")
else:
    print("Teen")
