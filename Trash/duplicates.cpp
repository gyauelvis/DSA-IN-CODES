// Let’s say you’re writing an application that requires you to check
// whether an array contains any duplicate values.

#include <iostream>
#include <vector>
#include <unordered_map>

bool is_contains_duplicates(std::vector<int> arr)
{
    std::unordered_map<int, int> duplicate_map;
    for (int i = 0; i < static_cast<int>(arr.size()); i++)
    {
        if (duplicate_map.count(arr[i]) > 0)
            return true;
        duplicate_map.insert(std::pair<int, int>(arr[i], 1));
    }
    return false;
}

int main()
{
    std::vector<int> arr = {1, 4, 2, 5, 2, 5, 6};
    std::string word = "aa";
    word.su
    std::cout << is_contains_duplicates(arr) << std::endl;
}