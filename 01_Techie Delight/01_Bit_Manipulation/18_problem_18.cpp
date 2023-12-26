#include <iostream>
#include <bitset>
using namespace std;

int circularShift(int n, int k, bool isLeftShift)
{
    if (isLeftShift)
    {
        // Approach - 1
        // return ((n >> k) << k);

        // Approach - 2
        // int pos = 0;
        // int mask = 0, m = n;
        // while (k)
        // {
        //     mask = mask | ((m & 1) << pos);
        //     m = m >> 1;
        //     pos++;
        //     k--;
        // }
        // return (n ^ mask);

        // Approach - 3
        int pos = 32;
        return (n << k) | (n >> (pos - k));
    }
    else
    {
        // Approach - 1
        // int pos = 31;
        // int mask = 0;
        // while (k)
        // {

        //     mask = mask | ((n & 1) << pos);
        //     n = n >> 1;
        //     pos--;
        //     k--;
        // }
        // return (mask | n);

        // Approach - 2
        int pos = 32;
        return (n >> k) | (n << (pos - k));
    }
}

int main()
{
    int n, k, isLeftShift;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Enter a position: ";
    cin >> k;
    cout << "Left Circular Shift(1)/Right Circular Shift(0): ";
    cin >> isLeftShift;
    cout << "Number is: " << bitset<32>(n) << endl;
    cout << "Answer is: " << bitset<32>(circularShift(n, k, isLeftShift));
}