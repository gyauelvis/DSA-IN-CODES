#include <iostream>

void selection_sort(int array[], int length){
    for(int i = 0; i < length;i++){
        for(int j = i + 1; j < length;j++){
            if(array[j]<array[i]){
                int temp = array[j];
                array[j] = array[i];
                array[i] = temp;
            }
        }
    }
}

int main(){
    int list[] = {0,1,4,3,6,2};
    int length = sizeof(list)/sizeof(list[0]);
    selection_sort(list,length);
    for(int i = 0; i<length; i++){
        std::cout << list[i] << std::endl;
    };

    return 0;
}