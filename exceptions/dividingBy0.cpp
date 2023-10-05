#include <iostream>
#include <cassert>

int main(){

    int quotient,divisor,dividend;

    std::string inputStr = "The input stream is in the fail state";

    try{
        std::cout<<"Enter dividend: "<<std::endl;
        std::cin>>dividend;
        std::cout<<"Enter divisor"<<std::endl;
        std::cin>>divisor;
        if(divisor == 0){
             throw divisor;
            }else if(divisor < 0){
                throw std::string("Negative divisor must be");
            }else if(!std::cin){
                throw  inputStr;
            }

            quotient =dividend/divisor;
             std::cout<<"Quotient"<<quotient<<std::endl;

    }catch(int x){
        std::cout<<"Division by zero"<<std::endl;
    }catch(std::string x){
        std::cout<<x<<std::endl;
    }
    

    // using if for error handling
    // if(divisor != 0){
    //     quotient =dividend/divisor;
    //     std::cout<<"Quotient"<<quotient<<std::endl;
    // }else{
    //     std::cout<<"Can't divide by zero"<<std::endl;
    // }

    // using assert
    // assert(divisor!=0);
    // quotient =dividend/divisor;
    // std::cout<<"Quotient"<<quotient<<std::endl;





    

    return 0;
}