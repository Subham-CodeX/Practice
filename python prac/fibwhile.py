# n = int(input("Enter the number of terms: "))

# a, b = 0, 1
# count = 0

# while count < n:
#     print(a, end=" ")
#     a, b = b, a + b
#     count += 1

n = int(input("enter no; "))
a,b = 0,1
for ele in range(n):
    print(a, end=" ")
    a,b=b,a+b

