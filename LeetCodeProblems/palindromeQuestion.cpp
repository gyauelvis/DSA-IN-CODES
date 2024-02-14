// Given an array of strings words, return the first palindromic string in the array. If there is no such string, return an empty string ""
// A string is palindromic if it reads the same forward and backward.
// Ex 1:
// Input: words = ["abc","car","ada","racecar","cool"]
// Output: "ada"

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