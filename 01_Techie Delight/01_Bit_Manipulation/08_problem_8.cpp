#include <iostream>
#include <math.h>
using namespace std;

/*
given an integer covert into in decimal format

Input:  20
Output: 00000000000000000000000000010100

Input:  64
Output: 00000000000000000000000001000000
*/

int convertBinary(int n)
{
    unsigned long long int ans = 0;
    int i = 0;
    while (n)
    {
        int bit = (n & 1);
        int power = (bit * pow(10, i));
        ans = power + ans;
        i++;
        n = n >> 1;
    }
    return ans;
}
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Number in binary: " << convertBinary(n) << endl;
}