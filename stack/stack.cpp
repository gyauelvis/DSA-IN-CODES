#include <iostream>
#include <string>

using namespace std;

template<typename T, int length>
class Stack{
    private:
    T stack[length];
    int top, count;

    public:
    bool isStackEmpty() const { return top == -1; }
    bool isStackFull(){return count == length;};

    void push(T& value){
        try{
            if(isStackFull()){
                throw string("stack is full");
            }else{
                top++;
        count++;
        this->stack[top] = value;
            }
        }catch(string exception){
            cout << exception << ::endl;
        }
        
    }

    T & pop(){
        try{
            if(isStackEmpty())
                throw string("stack empty");
            else{
                return this->stack[top];
                top--;
                count--;
            }
        }catch(string error){
            cout << error << ::endl;
        }
    }

   

    Stack(): top(-1), count(0){};
};

int main(){
    Stack<int, 5> stack;
    stack.pop();

    return 0;
}