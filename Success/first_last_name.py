# def full_name(str1,str2):
#     res = str1 +" " + str2
#     return res


# str1=input("First name: ")
# str2=input("sec name: ")
# ans=full_name(str1,str2)
# print(ans)


def print_full_name(first, last):
    res = first + " " + last                   # print(f"Hello {first} {last}! you just delved into python)
    print(f"Hello {res} ! you just delved into python")
    
if __name__ == '__main__':
    first_name = input()
    last_name = input()
    print_full_name(first_name, last_name)