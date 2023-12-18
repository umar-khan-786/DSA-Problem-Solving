#include <iostream>
using namespace std;

/*

Given an integer, unset its rightmost set bit.

Input: n = 20
Output: 16
Explanation:

20 in binary is 00010100
16 in binary is 00010000

*/
int unsetRightmostSetBit(int n)
{
    int i = 1, m = n, mask = 1;
    while (i != 0)
    {
        if (m & 1)
        {
            i = 0;
        }
        else
        {
            mask = (mask << 1);
            m = (m >> 1);
        }
    }
    return (mask ^ n);
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Ans is: " << unsetRightmostSetBit(n);
}