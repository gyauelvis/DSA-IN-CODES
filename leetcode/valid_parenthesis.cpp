// Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.
// An input string is valid if:
// Open brackets must be closed by the same type of brackets.
// Open brackets must be closed in the correct order.
// Every close bracket has a corresponding open bracket of the same type.
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

bool isValid(string s) {
   vector<char> stack;
   unordered_map<char, char> table;
   table.insert(pair<char, char>('(', ')'));
   table.insert(pair<char, char>('[', ']'));
   table.insert(pair<char, char>('{', '}'));
   int top = -1;

   if(s.size() <= 1) return false;
   for(char &c : s){
    if(c == '(' || c == '[' || c == '{'){
        stack.push_back(c);
        top++;
    }else if(stack.empty()) return false;
    else{
        cout<<table[stack[top]]<<endl;
        cout<< c<<endl;
        if(table[stack[top]] != c){
            return false;
        }else{
            stack.erase( stack.begin() + top);
            top--;
        }
    }
    }
    return (stack.empty())? true : false;
}


int main(){

    cout << isValid("(())") << endl;
    return 0;
}