#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#include <unordered_map>
#include <map>

using namespace std;
class Solution
{
public:
    vector<vector<int>> threeSum(vector<int> &nums)
    {
        vector<vector<int>> ans;
        set<vector<int>> set1;
        if (nums.size() < 3)
            return ans;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i++)
        {
            if (i > 0 && nums[i] == nums[i - 1])
                continue;
            int j = i + 1, k = nums.size() - 1;
            while (j < k)
            {
                int sum = nums[i] + nums[j] + nums[k];
                if (sum == 0)
                {
                    vector<int> pair3 = {nums[i], nums[j], nums[k]};
                    if (set1.count(pair3) == 0)
                    {
                        ans.push_back(pair3);
                        set1.insert(pair3);
                    }
                    j++;
                    k--;
                }
                else if (sum < 0)
                    j++;
                else
                    k--;
            }
        }
        return ans;
    }
};

int main()
{
    vector<int[], int> ans;
}
