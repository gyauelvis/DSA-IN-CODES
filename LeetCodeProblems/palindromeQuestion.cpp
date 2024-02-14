#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    string firstPalindrome(vector<string> &words)
    {
        for (int i = 0; i < static_cast<int>(words.size()); i++)
        {
            string word = words[i], rev_word = "";
            for (int j = static_cast<int>(word.length() - 1); j >= 0; j--)
                rev_word += word[j];
            if (rev_word == word)
                return word;
        }
        return "";
    }
};

int main()
{
    Solution sol = Solution();
    vector<string> arr = {"notapalindrome", "racecar"};
    string a = sol.firstPalindrome(arr);
    return 0;
}