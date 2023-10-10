#include <iostream>

int linear_search(int array[], int value){
    for (int i = 0; i < sizeof(array)/sizeof(array[0]);i++) {
        if(array[i] == value)
            return i;
    }
    return -1;
}

int main(){
    int array[3] = {1,2,3};
    std::cout<<linear_search(array,5);
}