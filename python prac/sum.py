def give_sum(lis):
    sum=0
    for i in lis:
        if(i %2 ==0):
            sum+=i
    return sum

num=[1,2,4,5,6]
print("Sum of even number of the list: ",give_sum(num))