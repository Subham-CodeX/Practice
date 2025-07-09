def swap(str):
    result = ""
    for char in str:
        if char.islower():
            result+=char.upper()
        elif char.isupper():
            result+=char.lower()
        else:
            result+=char

    return result




str=input("Enter a string: ")
result = swap(str)
print(result)