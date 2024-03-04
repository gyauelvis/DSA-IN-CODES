#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

    vector<int> data = {0, 1, 2, 3, 4, 5, 6, 7};
    int findIndex = find(data.begin(), data.end(), 6) - data.begin();

    return 0;
}