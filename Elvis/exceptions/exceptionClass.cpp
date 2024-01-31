#include <iostream>

using namespace std;

// exception class
class divideByZero{
    private:
    string message;

    public:
    divideByZero():message("Division by zero"){};
    divideByZero(string str):message(str){};

    // the what function is the class responsible for returning the error message
    string what(){
        return message;
    }
};

int main(){
    int dividend,divisor,quotient;

    try{
        cout<<"Enter Dividend"<<endl;
        cin>>dividend;

        cout<<"Enter Divisor"<<endl;
        cin>>divisor;

        if(divisor!=0){
            quotient = dividend/divisor;
            cout<<quotient;
        }else{
            throw divideByZero("Found division by zero!");
        }
    }catch(divideByZero obj){
        cout<<obj.what()<<endl;
    };


    return 0;
}