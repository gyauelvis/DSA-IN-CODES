#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2){
    vector<int> ans;
    for (int i = 0;i<static_cast<int>(nums1.size());i++){
        int index = find(nums2.begin(),nums2.end(),nums1[i]) - nums2.begin();
        int value = nums2[index];
        int value2 = nums2[index];
        for (int j = index + 1; j < static_cast<int>(nums2.size());j++){
            if(nums2[j] > value2){
                value2 = nums2[j];
                break;
            }
        }
        if(value2 > value)ans.push_back(value2);
        else ans.push_back(-1);
    }
    return ans;
}

int main(){

    vector<int> nums = {1,2,3,4};
    vector<int> nums1 = {2,4};
    nextGreaterElement(nums1, nums);
    return 0;

}