def map(func,iteration):
    result=[]
    for i in iteration:
        result.append(func(i))
    return result

def sqaure(n):
    return n*n

list = [1,2,3,4,5]

ans = map(sqaure,list)
print(ans)
