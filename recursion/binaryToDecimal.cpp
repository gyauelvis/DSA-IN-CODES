#include <iostream>
#include <cmath>

int binaryToDecimal(const int binaryValue, int length, int n = 0) {
    if(length == 0) return binaryValue * std::pow(2, n);
    else{
        int rightMostValue = binaryValue % 10;
        int bin = binaryValue / 10;
        int decValue = (rightMostValue) * std::pow(2, n);
        return decValue + binaryToDecimal(bin, length - 1, n + 1);
    }

}

int main(){
    int bin = 1001101;
    int length = 6;
    std::cout<<binaryToDecimal(bin, length);
}