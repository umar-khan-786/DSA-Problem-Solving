#include <iostream>
using namespace std;

/*

Given two integers, find their XOR without using the XOR operator.

Input: x = 65, y = 80
Output: 17
Explanation: x in binary is 01000001 and y in binary is 01010000. Their XOR is 00010001, which is 17 in decimal.

*/

// int findXor(int x, int y)
// {
//     int ans = 0, pos = 0;
//     while (x && y)
//     {
//         if (((x & 1) == 1 && (y & 1) == 0) || ((x & 1) == 0 && (y & 1) == 1))
//         {
//             ans = ans | ((x & 1) | (y & 1) << pos);
//         }
//         x = x >> 1;
//         y = y >> 1;
//         pos++;
//     }
//     return ans;
// }

int findXor(int x, int y)
{
    return (x | y) - (x & y);
}
int main()
{
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;
    cout << "Answer is: " << findXor(x, y) << endl;
}