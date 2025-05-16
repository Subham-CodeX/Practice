list = [3,4,5,6,7,8,9]
max=list[0]
sec_max = list[1]
for item in list:
    if(sec_max<item and max>sec_max):
        sec_max= item
# print(max)
print(sec_max)