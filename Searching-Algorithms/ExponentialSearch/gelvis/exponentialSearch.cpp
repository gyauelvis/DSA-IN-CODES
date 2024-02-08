// Find a particular range in the array where the element is present and perform binary search in that range.

// 1. Check if value is contained in a[0]
// 2. If not, then check the next element in the array and keep doubling the index until the value is less than or equal to the value at that index or the index is out of bouds.
// 3. Perform binary search in the range from the previous step.

#include <iostream>
#include <vector>

// Implementation of the Exponential Search
int binarySearch(std::vector<int> arr, int searchKey, int lowerBound, int upperBound){
    while(lowerBound <= upperBound){
       int middleIndex = (lowerBound + upperBound) / 2;
       if(arr[middleIndex] == searchKey){
           return middleIndex;
       }
       else if(arr[middleIndex] < searchKey){
           lowerBound = middleIndex + 1;
       }
       else{
           upperBound = middleIndex - 1;
       }
    }
    return -1;
}

// implementation of ExponentialSearch
int exponentialSearch(std::vector<int> arr, int searchKey){
    int arrayLength = arr.size();
    if(arr[0] == searchKey){
        return 0;
    }else{
        int i = 1;
        while(i<arrayLength && arr[i] <= searchKey){
            i = i*2;
        }
        return binarySearch(arr, searchKey, i/2, std::min(i, arrayLength - 1));
    }
}


int main(){

}
