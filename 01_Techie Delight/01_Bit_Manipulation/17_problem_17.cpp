#include <iostream>
#include <bitset>
using namespace std;
#define INT_SIZE sizeof(int) * 8

int reverseBits(int n)
{
    int rev = 0;
    int pos = INT_SIZE - 1;
    while (pos >= 0 && n)
    {
        if ((n & 1))
        {
            rev = rev | (1 << pos);
        }
        n = n >> 1;
        pos--;
    }
    return rev;
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Number is: " << bitset<32>(n) << endl;
    cout << "Answer is: " << bitset<32>(reverseBits(n)) << endl;
}