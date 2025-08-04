# import textwrap
def warp(str,max_width):
    result=""
    for i in range(0,len(str),max_width):
        result+=str[i:i+max_width] + '\n'
    return result

if __name__ == '__main__':
    str,max_width= input("Enter String: "), int(input("Enter max Width: "))
    final_text=warp(str,max_width)
    print(final_text)