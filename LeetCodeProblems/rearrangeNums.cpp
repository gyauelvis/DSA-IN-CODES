#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> rearrangeArray(vector<int> &nums)
    {
        int i = 0, j = 1;
        while (j < static_cast<int>(nums.size()))
        {
            if (nums[i] < 0 && nums[j] > 0)
            {
                int temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
            }
            else if (nums[i] > 0 && nums[j] > 0)
            {
                for (int k = j + 1; k < static_cast<int>(nums.size()); k++)
                {
                    if (nums[k] < 0)
                    {
                        int temp = nums[k];
                        nums[k] = nums[j];
                        nums[j] = temp;
                        break;
                    }
                }
            }
            else if (nums[i] < 0 && nums[j] < 0)
            {
                for (int k = j + 1; k < static_cast<int>(nums.size()); k++)
                {
                    if (nums[k] > 0){
                        int temp = nums[k];
                        nums[k] = nums[i];
                        nums[i] = temp;
                        temp = nums[k];
                        nums[k] = nums[j];
                        nums[j] = temp;
                        break;
                    }
                }
            };
            j = j + 2;
            i = i + 2;
        }
        return nums;
    }
};

int main()
{
    Solution sol;
    vector<int> arr = {28, -41, 22, -8, -37, 46, 35, -9, 18, -6, 19, -26, -37, -10, -9, 15, 14, 31};
    vector<int> arr1 = sol.rearrangeArray(arr);
    for (int i = 0; i < arr1.size(); i++)
    {
        cout << arr1[i] << " ";
    }

    return 0;
}