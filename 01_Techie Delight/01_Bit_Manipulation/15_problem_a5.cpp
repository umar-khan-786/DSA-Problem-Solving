#include <iostream>
using namespace std;

/*

Given a positive number, check if it is a power of 4 or not.

Input: 256
Output: true

Input: 25
Output: false

*/

// Approach - 1
bool isPowerOf4(int n)
{
    long long int ans = 1;
    for (int i = 0; i < 16; i++)
    {
        if (ans == n)
            return 1;
        ans = ans * 4;
    }
    return 0;
}

// Approach - 2
bool isPowerOfFour(int n)
{
    return !(n & (n - 1)) && (n % 3 == 1);
}
int main()
{
    long long int n;
    cout << "Enter a number: ";
    cin >> n;
    if (isPowerOfFour(n))
    {
        cout << "Number is power of 4" << endl;
    }
    else
    {
        cout << "Number is not power of 4" << endl;
    }
}