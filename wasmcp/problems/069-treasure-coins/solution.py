# input pattern: single integer B (multiple of 10)
coins = [500, 200, 100, 50, 20, 10]
b = int(input())
count = 0
for c in coins:
    count += b // c
    b %= c
print(count)
