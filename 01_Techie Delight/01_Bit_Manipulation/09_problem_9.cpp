#include <iostream>
using namespace std;

/*

Given two integers, `x` and `n`, where `n` is non-negative, efficiently compute the power function `pow(x, n)`.

Input: x = -2, n = 10
Output: 1024
Explanation: pow(-2, 10) = 1024

Input: x = -3, n = 4
Output: 81
Explanation: pow(-3, 4) = 81

Input: x = 5, n = 0
Output: 1
Explanation: pow(5, 0) = 1

Input: x = -2, n = 3
Output: -8
Explanation: pow(-2, 3) = -8

*/

long power(int x, int n)
{
    int ans = 1;
    for (int i = 1; i <= n; i++)
    {
        ans *= x;
    }
    return ans;
}
int main()
{
    int x, n;
    cout << "Enter a number: ";
    cin >> x;
    cout << "Enter power: ";
    cin >> n;
    cout << "Answer is: " << power(x, n) << endl;
}