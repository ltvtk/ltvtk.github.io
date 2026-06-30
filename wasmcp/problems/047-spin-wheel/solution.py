# input pattern: single integer K (spin position)
k = int(input())
r = k % 3
if r == 1:
    print("Red")
elif r == 2:
    print("Blue")
else:
    print("Yellow")
