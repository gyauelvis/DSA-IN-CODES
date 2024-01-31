#include <string>

class invalidHr{
    private:
    std::string message;
    public:
    invalidHr() : message("Invalid Hour Value"){};
    invalidHr(std::string mes) : message(mes){};
    // the what fuction is always responsible for returning the error message
    std::string what(){return message;};
};