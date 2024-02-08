#include <iostream>
// implementation for binary search
int binarySearch(int arr[], int searchValue, int arrLength)
{
    int lower_bound = 0, upper_bound = arrLength - 1;

    while (lower_bound <= upper_bound)
    {
        int middleIndex = (lower_bound + upper_bound) / 2;
        if (arr[middleIndex] == searchValue)
            return middleIndex;
        else if (arr[middleIndex] < searchValue)
            lower_bound = middleIndex + 1;
        else
            upper_bound = middleIndex - 1;
    }
    return -1;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    std::cout << binarySearch(arr, 2, 5) << std::endl;
}