list = [3,4,5,6,7,8,9]
max=sec_max=float('-inf')
for item in list:
    if(item>max):
        sec_max=max
        max=item
    elif(max>item>sec_max):
        sec_max=item
       
    
print(max)
print(sec_max)