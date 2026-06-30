# input pattern: single integer K (registration number)
k = int(input())
r = k % 6
if r == 1:
    print("Red")
elif r == 2 or r == 4:
    print("Blue")
elif r == 3:
    print("Yellow")
elif r == 5:
    print("Purple")
else:
    print("Orange")
