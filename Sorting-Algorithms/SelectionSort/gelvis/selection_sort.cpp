// Go through the array
// Assume the first value in the arr is your smallest value
// Loop through the rest of the arr, if any value smaller than your value kept as the small, overwrite.
// Once you get to the end of the array swap the arr[0] and the index in the array where smallest value is
// Move from first value to fir and repeat steps
// Do same for all elements of the array

// Time Complexity = O(n)

#include <iostream>
#include <vector>

void selection_sort(std::vector<int> &arr)
{
    for (int i = 0; i < static_cast<int>(arr.size()); i++)
    {
        int min_index = i;
        for (int j = i + 1; j < static_cast<int>(arr.size()); j++)
        {
            if (arr[j] < arr[min_index])
                min_index = j;
        }

        if (min_index != i)
        {
            int temp = arr[i];
            arr[i] = arr[min_index];
            arr[min_index] = temp;
        }
    }
}

int main()
{
    std::vector<int> arr = {1, 3, 5, 3, 2};
    selection_sort(arr);
    for (int i = 0; i < 5; i++)
    {
        std::cout << arr[i];
    }
    std::cout << " " << std::endl;
    return 0;
}