#include <iostream>

void bubble_sort(int array[], int length) {
    int unsorted_until = length - 1;
    bool isSorted = false;

    while(!isSorted){
        isSorted = true;

        for(int i = 0; i< unsorted_until; i++) {
            if(array[i] > array[i+1]) {
                isSorted = false;
                int temp = array[i];
                array[i] = array[i+1];
                array[i+1] = temp;
            }
        }
        unsorted_until = unsorted_until - 1;
    }

}

int main() {
    int list[] = {13, 45, 3, 89, 2, 57, 3};
    int length = sizeof(list) / sizeof(list[0]);
    bubble_sort(list, length);

    for (int i = 0; i < length; i++) {
        std::cout << list[i] << " ";
    }

    return 0;
}