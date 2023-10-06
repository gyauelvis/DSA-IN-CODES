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

void doDivision() throw (divideByZero);

int main(){
    while(true){
        try{
            doDivision();
            break;
        }catch(divideByZero exception){
            cout<<exception.what()<<endl;
            cout<<"Restoring input..."<<endl;
        }
    }
}

void doDivision() throw (divideByZero){
    int divisor,dividend, quotient;
    try{

        cout<<"Enter Dividend"<<endl;
        cin>>dividend;

        cout<<"Enter Divisor"<<endl;
        cin>>divisor;

        if(divisor==0){
            throw divideByZero("Found division by zero!");
        }
        quotient = dividend/divisor;
        cout<<quotient;

    }catch(divideByZero obj){
        // catches the exception but does not handle but rather throws it to the main for the catch block stated to handle the exception
        throw;
    }
}