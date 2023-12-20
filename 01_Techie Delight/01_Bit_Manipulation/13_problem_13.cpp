#include <iostream>
using namespace std;

/*

Given a positive number n, find the previous power of 2. If n itself is a power of 2, return n.

Input: n = 20
Output: 16

Input: n = 16
Output: 16

*/

int previousPowerOf2(int n)
{
    n = n - 1;

    while ((n & (n - 1)))
    {
        n = (n & (n - 1));
    }
    return n;
}
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Answer is: " << previousPowerOf2(n) << endl;
}