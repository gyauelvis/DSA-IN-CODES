#include <iostream>
#include <vector>

using namespace std;

template <typename T>
class Queue
{
private:
    int size, front = 0, bottom = 0;
    vector<T> queueVect;

public:
    Queue(int new_size = 0){
        size = new_size;
        queueVect.reserve(new_size);
    };
    bool isQueueEmpty() { return front == 0; }
    bool isQueueFull(){return front >= size};
    void enqueue(T &value){
        try{
            if(!isQueueFull()){
                queueVect.push_back(value)
                front++;
            };
            else throw string("Queue is Full");
        }catch(string err){
            cout<<err<<endl;
        }
    }
    void dequeue(){
        try{
            if(isQueueEmpty()) throw string("Queue is Empty");
            front--;
        }
    }
    
};

int main()
{
    return 0;
}