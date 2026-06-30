# input pattern: single integer N (1-10000)
n = int(input())
s = sum(i for i in range(1, n) if n % i == 0)
if s == n:
    print("Perfect")
else:
    print("Not Perfect")
