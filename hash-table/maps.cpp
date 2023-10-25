#include <iostream>
#include <string>
#include <map>

using namespace std;

int main(){
    // initializing map
    map<string, string> my_dictionary;

    // Adding values to map
    my_dictionary.insert(pair<string, string>("banana", "die Banane"));
    my_dictionary.insert(pair<string, string>("apple", "del Apfel"));
    // Accessing the dictionary values and updating the map values
    my_dictionary["banana"] = "Die Erbeere";

    // Deleting specific elements in the map
    my_dictionary.erase("banana");
    // Printing out key value pairs
    for(auto elem: my_dictionary)
        cout<< elem.first<<" -- "<< elem.second<<endl;
    
    // Accessing the size of the map
    cout<<my_dictionary.size()<<endl;

    // clearing all the elements in the map
    my_dictionary.clear();



    cout<<my_dictionary.size()<<endl;
    return 0;
}