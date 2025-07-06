n = int(input())
arr= list(map(int, input().split()))
f_max=sec_max=float('-inf')
for ele in arr:
    if(f_max<ele):
        f_max=ele

for item in arr:
    if(item >f_max):
        sec_max=f_max
        f_max=item
    elif(f_max > item> sec_max):
        sec_max=item
   
print(f_max)
print(sec_max)
print("code ended")