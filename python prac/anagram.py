str1="listen"
str2="silent"

str1 =str1.replace(" ","").lower()
str2 =str2.replace(" ","").lower()

if sorted(str1) == sorted(str2):
    print("The string are anagrams")
else:
    print(" the string is not anagrams")