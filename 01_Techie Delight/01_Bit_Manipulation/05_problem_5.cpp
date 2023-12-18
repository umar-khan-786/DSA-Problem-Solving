#include <iostream>
using namespace std;

/*

Given an integer, count its set bits.

Input: n = 16
Output: 1
Explanation: The binary representation of 16 is 00000000000000000000000000001000.

Input: n = -1
Output: 32
Explanation: The binary representation of -1 is 11111111111111111111111111111111.

*/

int countSetBits(int n)
{
    int count = 0;
    while (n)
    {
        // if (n & 1)
        // {
        //     count++;
        // }

        // n = n >> 1;
        n = n & (n - 1);
        count++;
    }
    return count;
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "No of setBits in " << n << " are: " << countSetBits(n) << endl;
}