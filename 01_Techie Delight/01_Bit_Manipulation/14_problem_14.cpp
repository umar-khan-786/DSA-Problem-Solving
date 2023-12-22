#include <iostream>
using namespace std;

/*

Given an integer, swap two bits at given positions in a binary representation of it.

Input:

n = 31
p = 2, q = 6 (3rd and 7th bit from the right)

Output: 91

Explanation:

31 in binary is 00011111
91 in binary is 01011011

*/

int swapBits(int n, int p, int q)
{
    return ((n ^ (1 << p)) ^ (1 << q));
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Answer is: " << swapBits(n, 0, 2) << endl;
}