// The goal is to reduce the number of elements to be checked by skipping elements
// that are not likely to be searched for, and then perform linear search on the remaining elements.
// The jump block is calculated by taking the square root of the array length.
// The left pointer is then incremented by the jump block until the value at the left pointer is greater than the search value.
// The right pointer is then set to the left pointer minus the jump block.
// The time complexity of jump search is O(√n) and the space complexity is O(1).
#include <iostream>
#include <vector>
#include <cmath>

// Implementation of the Jump Search
int jumpSearch(std::vector<int> array, int searchValue)
{
    int arrayLength = array.size(), jumpBlock = std::sqrt(arrayLength), left = 0;
    while (left < arrayLength && array[left] < searchValue)
        left += jumpBlock;

    for (int i = std::min(arrayLength, left); i >= left - jumpBlock; i--)
    {
        if (array[i] == searchValue)
            return i;
    }
    return -1;
}

int main()
{
    std::vector<int> array = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int searchValue = 5;
    int result = jumpSearch(array, searchValue);
    std::cout << "The element " << searchValue << " is at index " << result << std::endl;
    return 0;
}