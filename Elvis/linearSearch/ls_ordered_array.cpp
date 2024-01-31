#include <iostream>

int linear_search(int array[], int  value, int length){
    for(int i=0;i<length;i++){
        if(array[i]==value){
            return i;
        }else if(array[i]>value){
            break;
        }
    }
    return -1;
}

int main(){
    int array[3] = {1,2,3};
    int length = sizeof(array)/sizeof(array[0]);
    std::cout<<linear_search(array,1,length);
}