#include <iostream>


int largest(const int list[], int lowerIndex, int upperIndex)
 {
 int max;
 if (lowerIndex == upperIndex) //size of the sublist is one
 return list[lowerIndex];
 else
    {
        max = largest(list, lowerIndex + 1, upperIndex);
if (list[lowerIndex] >= max)
            return list[lowerIndex];
        else
            return max;
    }
 }

int main(){
    int list[3] = {3,5,1};
    std::cout<<largest(list,0,2) << std::endl;
}

