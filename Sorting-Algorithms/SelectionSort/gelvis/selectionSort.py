def selection_sort(arr):
    for i in range(len(arr)):
        min_index = i
        for j in range(i+1, len(arr)):
            if arr[j] < arr[min_index]:
                min_index = j
            j += 1
        arr[min_index],arr[i] = arr[i], arr[min_index]
    return arr

list1= [1,4,2,5,2,9,0]
print(selection_sort(list1))