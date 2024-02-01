def insertion_sort(array):
    for i in range(1,len(array)):
        temp_value = array[i]
        j = i - 1
        while j >= 0 and array[j]>temp_value:
            array[j + 1] = array[j]
            j -= 1
        array[j + 1] = temp_value
    return array

list = [10,4,2,5]
print(insertion_sort(list))