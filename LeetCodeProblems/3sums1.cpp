#include <iostream>
#include <vector>
#include <unordered_map>
#include <set>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    vector<vector<int>> threeSum(vector<int> &nums)
    {
        vector<vector<int>> ans;
        unordered_map<int, int> map;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i++)map[nums[i]] = i;
        int j = 1, k = nums.size() - 1;
        while(j < k){
            int sum = nums[j] + nums[k];
            if(map.find(-sum)!=map.end()){
                vector<int> pair3 = {nums[j], nums[k], }
            }
        }
    }
};

int main()
{
}