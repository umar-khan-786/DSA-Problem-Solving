#include <iostream>
using namespace std;

/*

Given an integer n and a positive number k, check if k'th bit is set or not.

Input: n = 20, k = 3
Output: true
Explanation: 20 in binary is 00010100

Input: n = 16, k = 3
Output: false
Explanation: 16 in binary is 00010000

*/

bool isKthBitSet(int n, int k)
{
    int i = 1;
    while (i < k)
    {
        n = (n >> 1);
        i++;
    }
    return (n & 1);
}
int main()
{
    int n, k;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Enter a kth Bit: ";
    cin >> k;
    if (isKthBitSet(n, k))
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
}