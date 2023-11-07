#include <iostream>

int partition(int array[] , int left, int right){
    int pivot_index = right;
    int pivot = array[pivot_index];
    int right_index = pivot_index - 1;
    int left_index = left;

    while (right_index - left_index >= 0){
        if(array[left_index] < pivot){
            left_index = left_index + 1;
        }else{
            if(array[right_index] > pivot){
                right_index = right_index - 1;
            }else{
                int temp = array[right_index];
                array[right_index] = array[left_index];
                array[left_index] = temp;
                left_index = left_index + 1;
            }
        }
    }
    array[pivot_index] = array[left_index];
    array[left_index] = pivot;

    return left_index;

}

int quick_sort(int array[],int left_index, int right_index){
    if(right_index - left_index <= 0){
        return 0;
    }

    int val = partition(array,left_index, right_index);
    partition(array, left_index, val - 1);

    partition(array, val + 1, right_index);
};

int quick_select(const int kth_lowest_value,int array[], int left_index, int right_index){
    int value = partition(array, left_index, right_index);
    if(kth_lowest_value == value){
        return array[value];
    }else if(kth_lowest_value < value){ 
        partition(array, left_index, value - 1);
    }else{
         partition(array, value + 1, right_index);
    }
}

int main(){

    int array[] = {0,5,1,2,6,3};

    std::cout<<quick_select(5, array,0, 5)<<"\n";

    for(int i=0; i<sizeof(array)/sizeof(array[0]); i++){
        std::cout<<array[i]<<"-";
    }


    return 0;
}