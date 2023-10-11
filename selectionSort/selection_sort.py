def selection_sort(array):
    for i in range(len(array)):
        j = i + 1
        while j < len(array):
            if array[j] < array[i]:
                array[j],array[i] = array[i],array[j]
            j+=1
    return array

list = [1,3,2,5,4]
print(selection_sort(list))