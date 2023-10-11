def binary_search(array,value):
    lower_bound = 0
    upper_bound = len(array) - 1
    while lower_bound <= upper_bound:
        middle_point = (lower_bound + upper_bound)/2
        if(value < array[middle_point]):
            upper_bound = middle_point - 1
        elif(value > array[middle_point]):
            lower_bound = middle_point + 1
        else:
            return middle_point
    return -1