#include <iostream>
#include <string>
#include <cctype>
#include "invalidHr.h"
#include "invalidMin.h"
#include "invalidSec.h"

class Conversion{
    private:
    int hr, sec, min;
    std::string am_pm;
    public:
    void setValue(int hour, int second, int minute, std::string new_am_pm);
    Conversion(int hour = 0, int second = 0, int minute = 0, std::string new_am_pm = "");
    
};

void Conversion::setValue(int hour, int second,int minute, std::string new_am_pm){
    try{
        if(hour<= 0 || hour>12)
            throw invalidHr();
        if(minute<= 0 || minute>60)
            throw invalidMin();
        if(second<= 0 || second>60)
            throw invalidSec();
        for(char &c : new_am_pm){
            c = toupper(c);
        }
        if(new_am_pm != "AM" || new_am_pm != "PM"){
            throw "Invalid AM/PM string";
        }

        hr = hour;
        min = minute;
        sec = second;
        am_pm = new_am_pm;

    }catch(invalidHr exception){
        std::cout<<exception.what()<<std::endl;

    }catch(invalidMin exception){
         std::cout<<exception.what()<<std::endl;

    }catch(invalidSec exception){

         std::cout<<exception.what()<<std::endl;
    }catch(std::string exception){
        std::cout<<"am or pm";

    }
}
