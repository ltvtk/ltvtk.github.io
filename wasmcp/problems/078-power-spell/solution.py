# input pattern: B, E, M on separate lines
B = int(input())
E = int(input())
M = int(input())
result = 1
B = B % M
while E > 0:
    if E % 2 == 1:
        result = (result * B) % M
    B = (B * B) % M
    E //= 2
print(result)
