#include <iostream>
using namespace std;

/*

Given two integers x and y, find the total number of bits needed to be flipped for converting x to y.

Input: x = 65, y = 80
Output: 2
Explanation: The total number of bits to be flipped is 2 since 65 is 01000001 in binary and 80 is 01010000 in binary.

*/

int findBits(int x, int y)
{
    int n = (x ^ y);
    int count = 0;
    while (n)
    {
        n = (n & (n - 1));
        count++;
    }
    return count;
}
int main()
{
    int x, y;
    cout << "Enter value in x: ";
    cin >> x;
    cout << "Enter value in y: ";
    cin >> y;
    cout << "No of bits to be flipped to covert x into y: " << findBits(x, y) << endl;
}