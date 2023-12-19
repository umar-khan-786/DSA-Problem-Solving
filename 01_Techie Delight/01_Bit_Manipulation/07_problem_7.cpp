#include <iostream>
using namespace std;

/*

Given a number, check if adjacent bits are set in the binary representation of it.

Input : 67
Output: true
Explanation: 67 in binary is 01000011 and has adjacent pair of set bits.

*/

bool isAdjacentBitsSet(int n)
{
    // Brute Force Solution
    // int count = 0;
    // while (n)
    // {
    //     if ((n & 1))
    //     {
    //         count++;
    //     }
    //     else
    //     {
    //         count = 0;
    //     }

    //     if (count == 2)
    //     {
    //         return 1;
    //     }

    //     n = n >> 1;
    // }

    // Optimized Solution
    while (n)
    {
        if ((n & 1) == 1 && ((n >> 1) & 1) == 1)
            return 1;
        n = n >> 1;
    }
    return 0;
}
int main()
{
    int n;
    cout << "Enter  a number: ";
    cin >> n;
    if (isAdjacentBitsSet(n))
    {
        cout << "Adjacent set bits" << endl;
    }
    else
    {
        cout << "Not adjacent set bits" << endl;
    }
}