#include <iostream>
using namespace std;
#include <vector>
/*
Interpolation search is a searching algorithm which is based purely on distribution or probabilty of the location of the target
It works better than binary search if there's is a uniform distrubution
Now the main formula for guessing the position of the target is given as= low+ ((range)/(difference between max and min))*difference between target and min
Though this might seem a daunting formula all it's doing is an estimate to guess the unkown value due to known values. it is more of a maths frequency distribution thingy
*/
int interPolSearch(vector <int> arr,int target)
{
    int low=0,high=arr.size()-1;//assign low to zero and high to the number of elements in the array -1;
    while(low <=high) //condition to continue checking before we leave this loop
    {
        if(high==low && arr[low]==target) return low;//this condition is to escape division by zero in calculation for the variable pos on the next line
        int pos=low +((high-low)/(arr[high]-arr[low]))*(target-arr[low]);//so this is the interpolation formula above just in code
        if(arr[pos]==target)//if we guess right, we return the position
            return pos;
        if(arr[pos] < target)//if we guess too low we move the lower pointer to one index infront of the pos variable pointer
            low=pos+1;
        else
            high=pos-1;//if we guess high we move the high pointer to one point below the pos variable
            //nb the pos+1 and the pos-1 are to ensure we don't look at pos more than once since it is checked in the first condition
    }
    return -1;             //return -1 if we never find it
}
int main()
{
    vector <int> binTest={20,34,54,64,76};
    //find 76
    cout<<"the position is  "<<interPolSearch(binTest,76)<<endl;
    //find 64
    cout<<"the position is  "<<interPolSearch(binTest,64)<<endl;
    //find 54
    cout<<"the position is  "<<interPolSearch(binTest,54)<<endl;
    //find something that doesn't exist
    cout<<"the position is  "<<interPolSearch(binTest,6)<<endl;

    return 0;
}
