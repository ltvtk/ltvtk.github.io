N = int(input())
total = 0
digits, start = 1, 1
while start <= N:
    end = min(N, start * 10 - 1)
    total += (end - start + 1) * digits
    start *= 10
    digits += 1
print(total)
