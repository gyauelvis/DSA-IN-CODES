#include <iostream>
int linear_search(int array[], int value, int length_array) {
    for (int i = 0; i < length_array;i++) {
        if(array[i] == value){
            return i;
        }
    }
    return -1;
}

int main(){
    int array[3] = {1,2,3};
    int length = sizeof(array)/sizeof(array[0]);
    std::cout<<linear_search(array,1,length);
}