#include <iostream>
#include <vector>
#include <bits/stdc++.h>


int main(){
    std::vector<int> arr = {10,4,5,0,4,2,1};
    sort(arr.begin(), arr.end());
    for( int i = 0; i<static_cast<int>(arr.size()); i++){
        std::cout<<arr[i]<<std::endl;
    }
}