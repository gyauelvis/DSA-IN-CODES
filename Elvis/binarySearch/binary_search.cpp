// Note binary search is only for ordered arrays
#include <iostream>

int binary_search(int array[], int value, int length){
    int lower_bound = 0, upper_bound = length - 1;

    while (lower_bound <= upper_bound){
        int midpoint = (upper_bound + lower_bound)/2;
        if(value < array[midpoint])
            upper_bound = midpoint - 1;
        else if(value > array[midpoint])
            lower_bound = midpoint + 1;
        else
            return midpoint;
    }

    return -1;
}

int main(){
    int array[10] = {0,1,2,3,4,5,6,7,8,9};
    int length = sizeof(array)/sizeof(array[0]);
    std::cout<<binary_search(array,5,length);
    return 0;
}

