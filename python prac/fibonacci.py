n = int(input("Enter the number:"))
def fibo(n):
    a,b=0,1
    for _ in range(n):
       print(a)
       a,b=b,a+b
# # print("series is:", fibo(n))
# fib = fibo(n)
# print(fib)
fibo(n)

        
