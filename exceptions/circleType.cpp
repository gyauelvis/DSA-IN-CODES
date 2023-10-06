// Example 10-8 defined the class circleType to implement the basic properties of 
// a circle. If a circleType object tries to set the radius to a negative number, then the 
// function setRadius of this class sets the radius to 0. In this example, first we define 
// the class negativeNumber to handle negative number exceptions and then use this 
// class to throw an exception if a circleType object tries to set the radius to a negative 
// number. So consider the following class:

#include <iostream>
using namespace std;

// defining the exception class
class negativeNumberException{
    private:
    string message;
    
    public:
    negativeNumberException():message("radius must be positive"){};
    negativeNumberException(string message) : message(message) {};
    string what(){
        return message;
    }
};

class CircleType{
    private:
    double radius;

    public:
    void setRadius(double value) {
        if(value<0){
            throw negativeNumberException();
        }
        this->radius = value;
    }
};



int main(){
    CircleType circle;

    try{
        circle.setRadius(-1);
    }catch(negativeNumberException exception){
        cout<<exception.what()<<endl;
    }
    
    return 0;
}