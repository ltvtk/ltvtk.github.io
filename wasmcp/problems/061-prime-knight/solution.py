# input pattern: single integer N (1-1000)
n = int(input())
if n < 2:
    print("NO")
else:
    is_prime = True
    for i in range(2, n):
        if n % i == 0:
            is_prime = False
            break
    print("YES" if is_prime else "NO")
