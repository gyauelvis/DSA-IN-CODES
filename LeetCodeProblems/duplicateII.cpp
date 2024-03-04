// Given an integer array nums and an integer k, return true if there are two distinct indices i and j in the array such that nums[i] == nums[j] and abs(i - j) <= k.

// Example 1:

// Input: nums = [1,2,3,1], k = 3
// Output: true

// Example 2:

// Input: nums = [1,0,1,1], k = 1
// Output: true

// Example 3:

// Input: nums = [1,2,3,1,2,3], k = 2
// Output: false

#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#include <unordered_map>

using namespace std;

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> map;
        map[nums[0]] = 0;
        for(int i = 1; i<nums.size(); i++){
            if(map.find(nums[i]) != map.end() && abs(i - map[nums[i]]) <= k)
             return true;
            else map[nums[i]] = i;
        }
        return false;
    }
};

int main()
{
    vector<int> nums = {1,2,3,1,2,3};
    int k = 3;
    return 0;
}
