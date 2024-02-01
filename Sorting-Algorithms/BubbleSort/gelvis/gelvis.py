def bubble_sort(array):
    unsorted_until_array_length = len(array) - 1
    is_sorted = False
    while not is_sorted:
        is_sorted = True
        for i in range(unsorted_until_array_length):
            if array[i] > array[i+1]:
                is_sorted = False
                array[i] , array[i+1] = array[i+1], array[i]
        unsorted_until_array_length = unsorted_until_array_length - 1

list = [8,90,78,26,30,2]
bubble_sort(list)

print(list)