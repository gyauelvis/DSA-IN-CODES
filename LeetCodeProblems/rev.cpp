#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

class Solution
{
public:
    int reverse(int x)
    {
        string stringEquiv = to_string(x);
        int i = 0, j = stringEquiv.length() - 1;
        while (i < j)
        {
            char temp = stringEquiv[i];
            stringEquiv[i] = stringEquiv[j];
            stringEquiv[j] = temp;
            i++;
            j--;
        }
        if (x > 0)
            return stoi(stringEquiv);
        else
            return -stoi(stringEquiv);
    };
};