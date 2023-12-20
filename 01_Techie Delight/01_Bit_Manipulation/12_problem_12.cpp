#include <iostream>
using namespace std;

/*

Given a positive number n, find the next highest power of 2. If n itself is a power of 2, return n.

Input: n = 20
Output: 32

Input: n = 16
Output: 16

*/

/*
//  Approach - 1
int nextPowerOf2(int n)
{
    int count = 0, ans = 0;
    while (count != 1)
    {
        int m = n, c = 0;
        ans = n;
        while (m)
        {
            m = (m & (m - 1));
            c++;
        }
        count = c;
        n++;
    }
    return ans;
}
*/

/*
// Approach - 2
int nextPowerOf2(int n)
{
    int k = 1;
    if (n == 0 || n == 1)
        return 2;

    while (k < n)
    {
        k = k << 1;
    }
}*/

// Approach - 3
int nextPowerOf2(int n)
{
    n = n - 1;

    while ((n & (n - 1)))
    {
        n = (n & (n - 1));
    }
    return n << 1;
}
int main()
{
    int n;
    cout << "Enter a Number: ";
    cin >> n;
    cout << "Answer is: " << nextPowerOf2(n) << endl;
}