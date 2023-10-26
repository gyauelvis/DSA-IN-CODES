#include <vector>
template <class type>
class Queue{
    private:
        std::vector<type> queue;
    public:
        void push(type value) {
            queue.push_back(value);
        }

        type lookup(){
            return queue.front();
        }

        void pop() {
            queue.erase(queue.front());
        }
};