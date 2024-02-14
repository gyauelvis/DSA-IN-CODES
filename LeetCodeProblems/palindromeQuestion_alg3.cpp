#include <iostream>
#include <vector>

using namespace std;

class Solution{
private:
    bool isPalindrome(string word){
        int k = 0, j = word.length() - 1;
        while (k < j){
            if (word[k] != word[j]) return false;
            k++, j--;
        }
        return true;
    }
public:
    string firstPalindrome(vector<string> &words){
        for (int i = 0; i < static_cast<int>(words.size()); i++){
            if (isPalindrome(words[i]))return words[i];
        }
        return "";
    }
};

int main()
{

    Solution sol = Solution();
    vector<string> arr = {"madam"};
    string a = sol.firstPalindrome(arr);
    cout<<a<<endl;
    return 0;
}