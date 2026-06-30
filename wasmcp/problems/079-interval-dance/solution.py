# input pattern: N on line 1, then N intervals each L on own line, R on own line
n = int(input())
acts = []
for _ in range(n):
    l = int(input())
    r = int(input())
    acts.append((r, l))
acts.sort()
count = 0
last_end = -1
for r, l in acts:
    if l > last_end:
        count += 1
        last_end = r
print(count)
