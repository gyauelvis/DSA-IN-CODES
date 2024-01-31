class QuickSort:
    def __init__(self, array = []):
        self.array = array

    def swap(self, index1, index2):
        self.array[index1],self.array[index2] = self.array[index2], self.array[index1]

    def partition(self, left, right):
        pivot_position = right
        pivot = self.array[pivot_position]
        right_index = pivot_position - 1;
        left_index = left
        while right_index - left_index >= 0:
            if pivot > self.array[left_index]:
                left_index += 1
            else:
                if(pivot < self.array[right_index]):
                    right_index -= 1;
                else:
                    self.swap(right_index, left_index)
                    left_index += 1

        self.swap(pivot_position, left_index)
        # for the sake of quick sort we return the left index
        print(self.array)
        return left_index

    def quicksort(self,left_index, right_index):
        if(right_index-left_index <= 0):
            return self.array

        pivot = self.partition(left_index, right_index)

        self.partition(left_index, pivot - 1)

        self.partition(pivot + 1, right_index)

        return self.array


obj = QuickSort([0,5,2,1,6,3])

print(obj.partition(0, len(obj.array) - 1))




