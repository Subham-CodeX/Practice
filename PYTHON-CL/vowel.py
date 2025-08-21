str=input("Enter string: ")
vow="aeiouAEIOU"
count=0
new_str=""
for ch in str:
    if ch in vow:
        count+=1
    else:
        new_str+=ch
print("Total vowel in string:",count)
print("new string is:",new_str)