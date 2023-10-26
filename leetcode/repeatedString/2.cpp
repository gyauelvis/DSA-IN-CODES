#include <iostream>
#include <string>

using namespace std;

long repeatedString(string s, long n) {
    if(s.size() > 0){
        if(s.size() == 1){
            cout<<"a";
            return (s == "a")? n : 0;
        }
    string array[s.size()];
    string repeated;
    for(int i = 0; i<s.size();i++)
        array[i] = s[i];


    int j = 0;
    for(int i = 0; i<n; i++){
        if(array[j] == "a"){
            repeated += array[j];
        }
        j++;
        if(j>=s.size()){
            j = 0;
        }
    }
    return repeated.size();
    }
    return 0;
}

int main(){
    long n = 100000000000;
    string s ="a";
    cout<<repeatedString(s, n);

    return 0;
}