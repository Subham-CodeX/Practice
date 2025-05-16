def find_max(list):
    if not list:
        return None
    max = list[0]
    for num in list:
        if num> max:
            max = num
            return max
        

new_lis = [2,5,7,9,23]
print("maximum element in list is: ", find_max(new_lis))