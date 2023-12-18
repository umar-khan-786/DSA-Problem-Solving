#include <iostream>
using namespace std;

/*

Given an integer, find position of the rightmost set bit in it.

Input: n = 20
Output: 3
Explanation: 20 in binary is 00010100

*/

int positionOfRightmostSetBit(int n)
{
    int k = 1, m = n;
    // edge case
    if (m == 0)
        return -1;
    // else check
    while ((m & 1) == 0)
    {
        k++;
        m = m >> 1;
    }
    return k;
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Position of right most setbit is: " << positionOfRightmostSetBit(n) << endl;
}