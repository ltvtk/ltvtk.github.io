# input pattern: single integer H (height in cm)
h = int(input())
if h < 110:
    print("FREE")
elif h <= 130:
    print("CHILD")
else:
    print("ADULT")
