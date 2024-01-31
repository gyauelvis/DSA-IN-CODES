#include <string>

class invalidMin{
    private:
    std::string message;
    public:
    invalidMin() : message("Invalid Minute Value"){};
    invalidMin(std::string mes) : message(mes){};
    // the what fuction is always responsible for returning the error message
    std::string what(){return message;};
};