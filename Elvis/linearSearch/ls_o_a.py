def linear_search(array,value):
    for i in range (len(array)):
        if array[i] == value:
            return i
        elif array[i] > value:
            break
    return -1
