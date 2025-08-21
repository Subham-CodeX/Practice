strr=input("Enter a string: ")
new_str=""
for ch in strr:
    if ch not in new_str:
        new_str+=ch
print(new_str)