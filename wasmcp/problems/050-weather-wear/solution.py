# input pattern: single integer T (temperature in Celsius, can be negative)
t = int(input())
if t < 15:
    print("Wear Jacket")
elif t <= 25:
    print("Wear Sweater")
else:
    print("Wear T-Shirt")
