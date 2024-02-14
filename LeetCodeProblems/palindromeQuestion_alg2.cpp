#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    string firstPalindrome(vector<string> &words)
    {
        for (int i = 0; i < static_cast<int>(words.size()); i++){
            string word_in_full = words[i], left_word_part, right_word_part, left_rev = "";
            if (word_in_full.length() % 2 == 0){
                left_word_part = word_in_full.substr(0, word_in_full.length() / 2);
                right_word_part = word_in_full.substr(word_in_full.length() / 2, word_in_full.length());
            }else{
                left_word_part = word_in_full.substr(0, (word_in_full.length() / 2));
                right_word_part = word_in_full.substr((word_in_full.length() / 2) + 1, word_in_full.length() - 1);
            }
            for (int j = left_word_part.length() - 1; j >= 0; j--){
                left_rev += left_word_part[j];
            }
            if (left_rev == right_word_part)
                return word_in_full;
        }
        return "";
    }
};

int main()
{
    Solution sol = Solution();
    vector<string> arr = {"abc","madam","hannah","car","ada","racecar","cool"};
    string a = sol.firstPalindrome(arr);
    cout << a << std::endl;
    return 0;
}