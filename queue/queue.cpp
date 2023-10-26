#include <iostream>
#include "queue_implementation.h"

int main(){
    Queue<int> queue;
    queue.push(12);
    queue.push(10);
    queue.push(1);
    std::cout << queue.lookup() << std::endl;
}