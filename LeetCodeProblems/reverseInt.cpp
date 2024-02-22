#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

class Solution
{
private:
    vector<int> stackValue(int x){
        vector<int> ans;
        int value_left = x;
        do{
            int remainder = value_left % 10;
            ans.insert(ans.begin(), remainder);
            value_left = (value_left - remainder) / 10;
        } while (value_left != 0);
        return ans;
    }

public:
    int reverse(int x){
        vector<int> stack = stackValue(x);
        long rev = 0;
        for (int i = 0; i < static_cast<int>(stack.size()); i++)
            rev += stack[i] * pow(10, i);
        if (rev > pow(2, 31) - 1 || rev < pow(-2, 31))
            return 0;
        return rev;
    };
};