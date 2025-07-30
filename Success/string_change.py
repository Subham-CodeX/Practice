str = "abracadabra"
lis=list(str)
lis[5]='k'
str="".join(lis)
print(str)


#  other process
str = "abracadabra"
print(str[:5])
print(str[6:])
str = str[:5] + "K" + str[6:]
print(str)