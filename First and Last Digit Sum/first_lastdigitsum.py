t=int(input())

for i in range(t):
    n=int(input())
    ld=n % 10
    fd=0
    while(n>=10):
        n= n // 10
        fd=n
    print(fd+ld)