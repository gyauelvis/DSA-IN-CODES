#include <iostream>

double fibonnaci(int n){
    if(n == 1 || n == 2) return 1;
    else{
        return fibonnaci(n-1) + fibonnaci(n-2);
    }
}

int main(){

    std::cout<<fibonnaci(9);

    return 0;
}