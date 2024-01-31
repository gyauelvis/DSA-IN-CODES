#include <iostream>
#include <vector>
#include <string>
#include <stdio.h>

using namespace std;

class Palindrome{
    private:
    string word, word_rev;
    vector<string> wordArr;

    public:

    Palindrome(string word = "");
    void putWordInVector(string word);
    void poppingElement();
    bool isPalindrome(string word);


};

 Palindrome::Palindrome(string word){
    this->word = word;
}

void Palindrome::putWordInVector(string word){
    for (int i = 0; i<word.size(); i++){
        wordArr.push_back(string(1,word[i]));
    }

}

void Palindrome::poppingElement(){
    int j = 0;
    for(int i = wordArr.size() - 1; i>=0; i--){
        word_rev += wordArr[i];
        j++;
    }
}

bool Palindrome::isPalindrome(string word){
    this->putWordInVector(word);
    this->poppingElement();

    if(word_rev == word ){
        return true;
    }else{
        return false;
        
    }
    
}

int main(){
    Palindrome gyau;
    if(gyau.isPalindrome("racecar")){
        cout<<"Palindrome"<<endl;
    }else{
        cout<<"Not Palindrome"<<endl;
    }
    return 0;
}