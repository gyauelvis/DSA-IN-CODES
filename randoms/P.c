#include <stdio.h>

double average(int array[], int array_length, int k){
    double max = 0, average;
    for(int i = 0; i<array_length; i++){
        double sum = 0;
        for(int j = i; j<k+i; j++){
            sum = sum + array[j];
        }
        
        average = sum / k;
        if(average > max){
            max = average;
        }
        
        if(i + k >= array_length){
            break;
        }
    }
    
    return max;
}

int main() {
    // Write C code here
    int array[] = {1,12,-5,-6,50,3};
    int length = sizeof(array)/sizeof(array[0]);
    int k = 4;
    
    double n = average(array, length, k);
    
    printf("%f\n", n);
    

    return 0;
}
