# input pattern: N on line 1, then N prices each on own line
n = int(input())
p = [int(input()) for _ in range(n)]
min_price = p[0]
max_profit = 0
for i in range(1, n):
    max_profit = max(max_profit, p[i] - min_price)
    min_price = min(min_price, p[i])
print(max_profit)
