#include <iostream>
using namespace std;

/*

Given a number, check if it is a power of 8 or not.

Input: 512
Output: true

Input: 56
Output: false

*/

// Approach - 1(in integer's range)
bool isPowerOf8(int n)
{
    int ans = 1;
    for (int i = 0; i < 11; i++)
    {
        if (ans == n)
            return 1;

        ans = ans * 8;
    }
    return 0;
}

// Approach - 2
bool isPowerOfEight(int n)
{
    return !(n & (n - 1)) && (n % 7 == 1);
}
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (isPowerOfEight(n))
    {
        cout << "Number is power of 8" << endl;
    }
    else
    {
        cout << "Number is not power of 8" << endl;
    }
}