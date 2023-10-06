#include <iostream>
using namespace std;

int main(){

    int integer;
    string str = "The input stream is in a fail state";
    bool done = true;

    // using do while
    // do{
    //     try{
    //         cout<<"Enter an integer: ";
    //         cin>>integer;
    //         if(!cin){
    //             throw str;
    //         }
    //         cout<<"Your input: "<<integer<<endl;
    //             done = true;
    //     }catch(string str){
    //         cout<<str<<endl<<"Restoring the input stream..."<<endl;
    //         cin.clear();
    //         cin.ignore(100,'\n');
    //     }
    // }while(!done);


    while(done){
        try{
            cout<<"Enter an integer: ";
            cin>>integer;
            if(!cin){
                throw str;
            }
            cout<<"Your input: "<<integer<<endl;
                done = false;
        }catch(string str){
            cout<<str<<endl<<"Restoring the input stream..."<<endl;
            cin.clear();
            cin.ignore(100,'\n');
        }
    }



    return 0;
}