// Given an array nums of n integers, return an array of all the unique quadruplets [nums[a], nums[b], nums[c], nums[d]] such that:

//     0 <= a, b, c, d < n
//     a, b, c, and d are distinct.
//     nums[a] + nums[b] + nums[c] + nums[d] == target

// You may return the answer in any order.

// Example 1:

// Input: nums = [1,0,-1,0,-2,2], target = 0
// Output: [[-2,-1,1,2],[-2,0,0,2],[-1,0,0,1]]

// Example 2:

// Input: nums = [2,2,2,2,2], target = 8
// Output: [[2,2,2,2]]

#include <iostream>
#include <vector>
#include <map>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    vector<vector<int>> fourSum(vector<int> &nums, int target)
    {
        vector<vector<int>> ans;
        map<vector<int>, int> map1;
        sort(nums.begin(), nums.end());
        if (nums.size() < 4)
            return ans;
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                int k = j + 1, l = nums.size() - 1;
                while (k < l)
                {
                    long long sum = static_cast<long long>(nums[i]) + static_cast<long long>(nums[j]) +
                                    static_cast<long long>(nums[k]) +
                                    static_cast<long long>(nums[l]);
                    if (sum == target)
                    {
                        vector<int> pair = {
                            nums[i], nums[j], nums[k], nums[l]};
                        if (map1.find(pair) == map1.end())
                        {
                            ans.push_back(pair);
                            map1[pair] = 1;
                        }
                        k++;
                        l--;
                    }
                    else if (sum < target)
                        k++;
                    else
                        l--;
                }
            }
        }
        return ans;
    }
};

int main()
{
    return 0;
}