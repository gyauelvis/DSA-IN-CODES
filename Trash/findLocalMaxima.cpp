// Given an (unsorted) array, an element is called *local maxima* if it is larger than its neighbor. For
// example, given A = [10 2 6 4 3 1 15 16], the local maxima elements are 10, 6, 16
// a) Write a C++ program to find the index of a local maxima in the array with O(n) running time.
// b) Can you do it with O(log n) running time algorithmically? No coding required but describing your
// intuition.
// c) Write a C++ program to find two elements in the array whose product equals to a given number in
// O(N logN) time.

#include <iostream>
#include <vector>
#include <unordered_map>

void findLocalMaxima(std::vector<int> arr)
{
    if (arr.size() > 1)
    {
        int i;
        if (arr[0] > arr[1])
        {
            i = 2;
            std::cout << 0 << std::endl;
        }
        else
            i = 1;
        while (i < static_cast<int>(arr.size() - 1))
        {
            if ((arr[i] > arr[i + 1]) && arr[i] > arr[i - 1])
            {
                std::cout << i << std::endl;
                i += 2;
            }
            else
                i++;
        }
        if (arr[arr.size() - 1] > arr[arr.size() - 2])
            std::cout << arr.size() - 1 << std::endl;
    }
    else
        std::cout << 0 << std::endl;
}

void sumsToTarget(std::vector<int> arr, int target)
{
    std::unordered_map<int, int> map;
    map[arr[0]] = 1;
    for (int i = 1; i <static_cast<int>(arr.size()); i++)
    {
        int complement = target - arr[i];
        if (map.find(complement) != map.end()){
            std::cout << complement << "and" << arr[i];
            break;
        }
        else
            map[arr[i]] = 1;
    }
}

int main()
{
    std::vector<int> arr = {10,4,5,0,4,2,1};


    sumsToTarget(arr, 12);
    return 0;
}