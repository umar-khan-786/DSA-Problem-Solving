#include <iostream>
#include <math.h>
using namespace std;
/*
    given an integer n, calculate binary from 1 to n;
*/
void findBinary(int x)
{
    for (int i = 1; i <= x; i++)
    {
        unsigned long long int ans = 0;
        int m = i;
        int p = 0;
        while (m)
        {
            int bit = (m & 1);
            ans = (bit * pow(10, p) + ans);
            m = m >> 1;
            p++;
        }
        cout << i << " in binary: " << ans << endl;
    }
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    findBinary(n);
}