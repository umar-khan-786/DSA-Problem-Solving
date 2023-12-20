#include <iostream>
#include <math.h>
using namespace std;

/*

Given a non-negative number n, check if the binary representation of n is a palindrome. A palindromic number is a number that remains the same when its digits are reversed.

The solution should consider the binary representation starting from the LSB (least significant bit) till the last set bit.

Input: n = 9
Output: true
Explanation: The binary representation of 9 is 1001, which is symmetric.

Input: n = 11
Output: false
Explanation: The binary representation of 11 is 1011, which is not symmetric.

*/

bool isPalindrome(int n)
{
    unsigned long long int forward = 0;
    unsigned long long int reverse = 0;
    int i = 0;

    while (n)
    {
        int bit = (n & 1);
        forward = (bit * pow(10, i) + forward);
        reverse = ((reverse * 10) + bit);
        i++;
        n = n >> 1;
    }
    if (forward == reverse)
        return 1;
    return 0;
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (isPalindrome(n))
    {
        cout << "Number is palindrom!!";
    }
    else
    {
        cout << "Number is not palindrom!!";
    }
}