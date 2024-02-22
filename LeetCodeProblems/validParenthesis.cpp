// Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

// An input string is valid if:

//     Open brackets must be closed by the same type of brackets.
//     Open brackets must be closed in the correct order.
//     Every close bracket has a corresponding open bracket of the same type.

 

// Example 1:

// Input: s = "()"
// Output: true

// Example 2:

// Input: s = "()[]{}"
// Output: true

// Example 3:

// Input: s = "(]"
// Output: false


#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution
{
public:
    bool isValid(string s)
    {
        if (s.length() < 2 || s.length() % 2 == 1)
            return false;
        vector<char> stack;
        stack.reserve(s.length());
        unordered_map<char, char> map;
        map.insert(pair<char, char>(']', '['));
        map.insert(pair<char, char>('}', '{'));
        map.insert(pair<char, char>(')', '('));
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[')
                stack.push_back(s[i]);
            else if (!stack.empty() && map[s[i]] == stack.back())
                stack.pop_back();
            else
                return false;
        }
        if (stack.size() == 0)
            return true;
        return false;
    }
};

int main()
{
    Solution sol;
    cout << sol.isValid("()[]{}") << std::endl;
}