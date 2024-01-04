#include <iostream>
#include <vector>
using namespace std;
/*

Given an integer array, in-place move all zeros present in it to the end. The solution should maintain the relative order of items in the array and should not use constant space.

Input : [6, 0, 8, 2, 3, 0, 4, 0, 1]
Output: [6, 8, 2, 3, 4, 1, 0, 0, 0]

*/
void moveZero(vector<int> &nums)
{
    int n = nums.size();
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] != 0)
        {
            nums[k++] = nums[i];
        }
    }

    for (int i = k; i < n; i++)
    {
        nums[i] = 0;
    }
}
int main()
{
    vector<int> nums;
    nums.push_back(6);
    nums.push_back(0);
    nums.push_back(8);
    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(0);
    nums.push_back(4);
    nums.push_back(0);
    nums.push_back(1);
    moveZero(nums);
    for (int i : nums)
    {
        cout << i << " ";
    }
}