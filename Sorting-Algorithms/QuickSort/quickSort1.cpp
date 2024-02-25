#include <iostream>
#include <vector>

using namespace std;

int partition(vector<int> &arr1, int leftIndex, int rightIndex)
{
    vector<int> arr = arr1;
    int pivot = arr[rightIndex];
    int leftPointer = leftIndex, rightPointer = rightIndex - 1;
    while (leftPointer < rightPointer)
    {
        while (arr[leftPointer] < pivot)
            leftPointer++;
        while (arr[rightPointer] > pivot)
            rightPointer--;

        if (arr[leftPointer] >= pivot && arr[rightPointer] <= pivot)
        {
            swap(arr[leftPointer], arr[rightPointer]);
            leftPointer++;
            rightPointer--;
        }
    }
    arr[arr.size() - 1] = arr[leftPointer];
    arr[leftPointer] = pivot;

    return leftPointer;
}

void quickSort(vector<int> arr, int lowIndex, int highIndex)
{
    if (highIndex - lowIndex >= 0)
    {
        int pivotPosition = partition(arr, lowIndex, highIndex);
        quickSort(arr, lowIndex, pivotPosition - 1);
        quickSort(arr, pivotPosition + 1, highIndex);
    }
}

int main()
{
    return 0;
}