x=int(input("Enter year: "))
if((x%4==0 and x%100!=0) or x%400==0):
    print(x,"this is leap year")
else:
    print(x,"This is not leap year")