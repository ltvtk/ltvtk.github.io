R  = int(input())
T  = int(input())
Vt = int(input())
Vr = int(input())

gap  = R - T
rel  = Vt - Vr
time = gap // rel
meet = T + time * Vt
print(time, meet)
