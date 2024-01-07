#include <iostream>
#include <vector>

using namespace std;
/*

Given two integer arrays, each of which is sorted in increasing order, merge them into a single array in increasing order, and return it.

Input: X = [1, 3, 5, 7], Y = [2, 4, 6]
Output: [1, 2, 3, 4, 5, 6, 7]

*/

vector<int> merge(vector<int> x, vector<int> y)
{
    vector<int> temp;
    int i = 0;
    int j = 0;
    int n = x.size();
    int m = y.size();

    while (i < n && j < m)
    {
        if (x[i] <= y[j])
        {
            temp.push_back(x[i++]);
        }
        else
        {
            temp.push_back(y[j++]);
        }
    }

    // abi agr x k elements bach ge to unhe store krwane k lie
    while (i < n)
    {
        temp.push_back(x[i++]);
    }
    // abi agr y k elements bach ge to unhe store krwane k lie
    while (j < m)
    {
        temp.push_back(y[j++]);
    }
    return temp;
}
int main()
{
    vector<int> x;
    x.push_back(0);
    x.push_back(1);
    x.push_back(3);
    x.push_back(5);
    x.push_back(7);
    vector<int> y;
    y.push_back(0);
    y.push_back(2);
    y.push_back(4);
    y.push_back(6);
    vector<int> ans = merge(x, y);
    cout << "Answer is: ";
    for (int i : ans)
    {
        cout << i << " ";
    }
}