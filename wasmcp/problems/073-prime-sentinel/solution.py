# input pattern: single integer N
n = int(input())
if n < 2:
    print("No")
else:
    prime = True
    i = 2
    while i * i <= n:
        if n % i == 0:
            prime = False
            break
        i += 1
    print("Yes" if prime else "No")
