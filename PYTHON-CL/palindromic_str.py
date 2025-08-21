str=input("Enter string is: ")
new_str=str.replace(" ","").lower()
if new_str== new_str[::-1] :
    print("palindromic")
else:
    print("not palindromic")