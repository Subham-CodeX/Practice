def remove_duolicate(lis):
    new_lis =[]

    for item in lis:
        if item not in new_lis:
            new_lis.append(item)
    return new_lis
    
number=[3,2,4,5,6,3,2,88]
print("new list is: ", remove_duolicate(number))