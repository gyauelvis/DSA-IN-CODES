#include <iostream>
#include <vector>

using namespace std;

vector<int> partition(vector<int> &arr1)
{
    vector<int> arr = arr1;
    int pivot = arr[arr.size() - 1];
    int leftPointer = 0, rightPointer = arr.size() - 2;
    while (leftPointer < rightPointer)
    {

        while (arr[leftPointer] < pivot)
            leftPointer++;
        while (arr[rightPointer] > pivot)
            rightPointer--;

        if (arr[leftPointer] >= pivot && arr[rightPointer] <= pivot)
        {
            int temp = arr[leftPointer];
            arr[leftPointer] = arr[rightPointer];
            arr[rightPointer] = temp;
            leftPointer++;
            rightPointer--;
        }
    }
    arr[arr.size() - 1] = arr[leftPointer];
    arr[leftPointer] = pivot;
    return arr;
}

int main()
{
    vector<int> arr = {1, 5, 2, 9, 4};
    vector<int> arr1 = partition(arr);
    for(int i = 0; i<arr1.size(); i++) cout<<arr1[i];
    return 0;
}