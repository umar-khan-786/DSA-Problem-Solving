#include <iostream>
#include <vector>
using namespace std;
/*

Given two sorted integer arrays, merge them into a single array in decreasing order, and return it. In other words, merge two sorted arrays from their end.

Input : X = [1, 3, 5], Y = [2, 6, 7, 10]
Output: [10, 7, 6, 5, 3, 2, 1]

*/
vector<int> merge(vector<int> x, vector<int> y)
{
    vector<int> temp;
    int i = x.size() - 1;
    int j = y.size() - 1;

    while (i >= 0 && j >= 0)
    {
        if (x[i] > y[j])
        {
            temp.push_back(x[i--]);
        }
        else
        {
            temp.push_back(y[j--]);
        }
    }

    // for remaining elements
    while (i >= 0)
    {
        temp.push_back(x[i--]);
    }
    while (j >= 0)
    {
        temp.push_back(y[j--]);
    }
    return temp;
}
int main()
{
    vector<int> x;
    x.push_back(1);
    x.push_back(3);
    x.push_back(5);
    x.push_back(7);
    x.push_back(10);
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