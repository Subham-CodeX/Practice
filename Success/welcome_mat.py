def mat_print(n,m):
    half=n//2
    for i in range(half):
        pattern = "♡"*(2*i-1)
        print(pattern.center(m,"-"))

    
    print("Madhure♥️  Krishna".center(m,"-"))

    for i in range(half-1,-1,-1):
        pattern="♡"*(2*i-1)
        print(pattern.center(m,"-"))

n,m=map(int,input().split())

res=mat_print(n,m)
print(res)