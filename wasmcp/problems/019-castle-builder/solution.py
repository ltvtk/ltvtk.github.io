A = int(input())
L = int(input())
W = int(input())
H = int(input())

cube = A * A * A
box  = L * W * H

if cube > box:
    print("Cube", cube)
elif box > cube:
    print("Box", box)
else:
    print("Equal", cube)
