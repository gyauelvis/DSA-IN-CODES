#include <iostream>
#include <vector>
using namespace std;
//the code is basically saying while you have no anomally(where the element ins't greater than the pivot , let i track j/let i equals j
//once you see an anommaly or where the jth element is greater than the partition,continue to incease j to you find an element which obeys the other and swap that element with the anomally
//once you have reach the end, come swap the pivot with the next anomally in line (i+1)th element so that the pivot will be in it's correct position even after everything

 int partionS(vector <int> &arr,int high,int low)
{
    int pivot=arr[high];    //assume your pivot is the last element in your array
    int i=(low-1);
    for(int j=low;j<=high-1;j++)
    {
        if(arr[j] < pivot)
        {
            ++i;
            swap(arr[j],arr[i]);
        }

    }
    swap(arr[i+1],arr[high]); //put the pivot elemnet or arr[high] in it's right positon which is (i+1)th position
    return (i+1);             //return the next point for the partition
}
void quickSort(vector <int> &arr,int low,int high)
{
    if(high > low)                                                                            //base case to stop our recurssion
    {
        int partiotoinIndex=partionS(arr,high,low);           //find a partition position
        quickSort(arr,partiotoinIndex+1,high);                  //SORT THE ELEMNET ABOVE
        quickSort(arr,low,partiotoinIndex-1);                    //SORT THE ELEMENTS BELOW
        // NOTE : partiotoinIndex+1 and partiotoinIndex-1 because we just want to avoid the very current pivot element we used and go ahead to the next element
    }
}
int main()
{
    vector <int> arr={32,41,4,1,43,2};
    partionS(arr,arr.size()-1,0);
    for(auto a : arr)
            cout<< a<<" ";
    cout<<endl;
    return 0;
}
