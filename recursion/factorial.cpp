#include <iostream>
using namespace std;


int factorial(int n){
    try{
        if(n<0){
            throw "n must be greater than zero";
        }else if(n == 0){
            return 1;
        } else if(n > 1){
             return n*factorial(n - 1);
        }
    }
    catch(string error){
        cout<<"Error: "<<error;
    };
}

int main(){
    cout<<factorial(5);
}

