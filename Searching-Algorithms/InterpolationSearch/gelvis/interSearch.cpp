#include <iostream>
#include <vector>

// Interpoltation Search Implementation
int interpolationSearch(std::vector<int> arr, int searchKey)
{
    int highIndex = arr.size() - 1, lowIndex = 0;

    while (lowIndex <= highIndex && searchKey >= arr[lowIndex] && searchKey <= arr[highIndex])
    {
        double probe = (lowIndex + (searchKey - arr[lowIndex]) * (highIndex - lowIndex)) / (arr[highIndex] - arr[lowIndex]);
        std::cout << "Probe: " << probe << std::endl;
        if (arr[probe] == searchKey)
            return probe;
        else if (arr[probe] > searchKey)
            highIndex = probe - 1;
        else
            lowIndex = probe + 1;
    }
    return -1;
}

int main()
{
    std::vector<int> array = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    std::cout << interpolationSearch(array, 5) << std::endl;
    return 0;
}