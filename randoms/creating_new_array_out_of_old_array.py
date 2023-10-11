def new_array(array):
    new_array1 = []
    index = 0
    while index < len(array):
        new_array1.append(array[index])
        index += 2
    return new_array1

my_list = [0,1,2,3,4,5,6,7,8]
print(new_array(my_list))