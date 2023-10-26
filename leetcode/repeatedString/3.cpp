#include <iostream>
#include <string>
#include <string.h>

using namespace std;

long repeatedString(string s, long n) {
    if(s.size() == 1){
        return (s == "a")? n : 0;
    }else if(s.size() > 1){
        string a_count;
        int j = 0;
        for(int i = 0; i<n; i++){
            if(s[j] == 'a')
                a_count+="a";
            j++;
            (j >= s.size())? j=0: j;
        }
        return a_count.size();
    }
    return 0;
}


int main(){
    long n = 100000000000;
    string s ="a";
    cout<<repeatedString(s, n);

    return 0;
}