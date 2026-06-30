# input pattern: single integer P (points)
p = int(input())
if p < 50:
    print("White Belt")
elif p < 100:
    print("Blue Belt")
else:
    print("Black Belt")
