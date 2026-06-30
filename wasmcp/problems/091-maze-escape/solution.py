# input pattern: R on line 1, C on line 2, then R lines of grid characters
from collections import deque
r = int(input())
c = int(input())
grid = []
sr = sc = er = ec = 0
for i in range(r):
    row = input()
    grid.append(row)
    for j in range(c):
        if row[j] == 'S':
            sr, sc = i, j
        elif row[j] == 'E':
            er, ec = i, j
dist = [[-1] * c for _ in range(r)]
dist[sr][sc] = 0
q = deque([(sr, sc)])
while q:
    x, y = q.popleft()
    for dx, dy in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
        nx, ny = x + dx, y + dy
        if 0 <= nx < r and 0 <= ny < c and grid[nx][ny] != '#' and dist[nx][ny] == -1:
            dist[nx][ny] = dist[x][y] + 1
            q.append((nx, ny))
print(dist[er][ec])
