// Let’s say that you are writing an application, and somewhere in your
// code you find that you need to get the intersection between two arrays. The
// intersection is a list of all the values that occur in both of the arrays. For
// example, if you have the arrays [3, 1, 4, 2] and [4, 5, 3, 6], the intersection would be
// a third array, [3, 4], since both of those values are common to the two arrays.

#include <iostream>
#include <vector>
#include <unordered_map>

void findIntersection(std::vector<int> arr1, std::vector<int> arr2, std::vector<int> &arr)
{
    std::unordered_map<int, int> map;
    for (int i = 0; i < static_cast<int>(arr1.size()); i++)
        map[arr1[i]] = 1;
    for (int i = 0; i < static_cast<int>(arr2.size()); i++)
    {
        if (map.find(arr2[i]) != map.end())
            arr.push_back(arr2[i]);
    }
}

int main()
{
    std::vector<int> arr = {3, 1, 4, 2}, arr1 = {4, 5, 3, 6}, arr2;
    findIntersection(arr, arr1, arr2);
    for (int i = 0; i < static_cast<int>(arr2.size()); i++)
        std::cout << arr2[i] << std::endl;
}