#include <iostream>

void decToBin(int decValue){
    if(decValue > 0){
    int remainder = decValue % 2;
    int quotient = (decValue - remainder) / 2;
    decToBin(quotient);
    std::cout << remainder;
    }
}

int main(){

    decToBin(2);

    return 0;
}