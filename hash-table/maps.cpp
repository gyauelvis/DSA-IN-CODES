#include <iostream>
#include <map>
#include <unordered_map>
#include <vector>

struct CityRecord {
    std::string name;
    int population;
    double longitude, latitude;

};

int main(){
    
    std::map<std::string,CityRecord> cities;

    cities["Accra"] = CityRecord{"Accra",500,2,1};
    cities["Cortes"] = CityRecord{"Cortes",500,3,4};
    cities["Majes"] = CityRecord{"Majes",500,3,2};
    cities["New Califrado"] = CityRecord{"New Califrado", 500,3,2};

    for(auto& city : cities){
        
    }
    return 0;
};