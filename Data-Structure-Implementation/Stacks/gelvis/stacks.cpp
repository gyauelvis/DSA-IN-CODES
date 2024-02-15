#include <iostream>
#include <vector>

template <typename T>
class stacks
{
private:
    /* data */
    int maxSize, top;
    std::vector<T> stackVect;

public:
    stacks(int size = 1){
        maxSize = size;
        stackVect.reserve(size);
        top = -1;
    };
    bool isStackEmpty(){return top == -1;}
    bool isStackFull(){return top >= maxSize - 1;}
    void push(T &value){
        try{
            if (isStackFull())
                throw std::string("Stack is full");
            stackVect.push_back(value);
            top++;
        }
        catch (std::string err){
            std::cout << err<<std::endl;
        }
    }
    void pop(){
        try{
            if (isStackEmpty())
                throw std::string("Stack is empty");
            top--;
        }
        catch (std::string err){
            std::cout << err<<std::endl;
        }
    }
    T peek(){
        try{
            if (isStackEmpty())
                throw std::string("Stack is empty");
            return stackVect[top];
        }
        catch (std::string err){
            std::cout << err<<std::endl;
        }
    }
};

int main()
{
    stacks<int> stack(10);
    int value = 10;
    stack.push(value);
    std::cout<<stack.peek()<<std::endl;
    return 0;
}