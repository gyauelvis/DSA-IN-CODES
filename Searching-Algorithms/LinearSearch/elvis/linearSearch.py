def linear_search(array, value):
    i = 0
    for i in range(len(array)):
        if array[i] == value:
           return i
    return -1

print(linear_search([0,1,2,3,4,5],5))