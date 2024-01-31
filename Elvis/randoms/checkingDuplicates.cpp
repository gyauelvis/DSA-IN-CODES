//  Let’s	say	you’re	writing	an application	that	requires	you	to	check
//  whether	an	array	contains	any	duplicate	values

#include <iostream>

bool contain_duplicate_values(int array[], int length){
    for(int i=0; i<length; i++){
        if(i != length - 1){
            for(int j = i + 1; j < length; j++){
                if(array[j] == array[i]){
                    return true;
                }
            }
        }
    }
    return false;
}

int main(){
    int array[] = {1,2,3,4,5};
    int array_size = sizeof(array)/sizeof(array[0]);

    
    (contain_duplicate_values(array, array_size))?std::cout<<"yes":std::cout<<"no";
    return 0;
}