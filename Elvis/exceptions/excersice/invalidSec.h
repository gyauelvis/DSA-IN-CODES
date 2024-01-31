#include <string>

class invalidSec{
    private:
    std::string message;
    public:
    invalidSec() : message("Invalid Second Value"){};
    invalidSec(std::string mes) : message(mes){};
    // the what fuction is always responsible for returning the error message
    std::string what(){return message;};
};