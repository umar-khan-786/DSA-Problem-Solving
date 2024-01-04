#include <iostream>
#include <vector>
using namespace std;
/*

Given an array of positive and negative integers, in-place segregate them in linear time and constant space. The output should contain all negative numbers, followed by all positive numbers.

Input : [9, -3, 5, -2, -8, -6, 1, 3]
Output: [-3, -2, -8, -6, 9, 5, 1, 3] or [-3, -2, -8, -6, 9, 5, 1, 3] or any other valid combination.

Input : [-4, -2, -7, -9]
Output: [-4, -2, -7, -9] or any other valid combination.

Input : [2, 4, 3, 1, 5]
Output: [2, 4, 3, 1, 5] or any other valid combination.

*/
void rearrange(vector<int> &nums)
{
    int n = nums.size();
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] < 0)
        {
            swap(nums[k++], nums[i]);
        }
    }
}
int main()
{
    vector<int> v;
    v.push_back(9);
    v.push_back(-3);
    v.push_back(5);
    v.push_back(-2);
    v.push_back(-8);
    v.push_back(-6);
    v.push_back(1);
    v.push_back(3);
    rearrange(v);
    for (int i : v)
    {
        cout << i << " ";
    }
}