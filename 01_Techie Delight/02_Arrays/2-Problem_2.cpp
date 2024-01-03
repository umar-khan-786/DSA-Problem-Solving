#include <iostream>
#include <vector>
using namespace std;
/*

Given a binary array, in-place sort it in linear time and constant space. The output should contain all zeroes, followed by all ones.

Input : [1, 0, 1, 0, 1, 0, 0, 1]
Output: [0, 0, 0, 0, 1, 1, 1, 1]

Input : [1, 1]
Output: [1, 1]

*/

// Approach - 1 ---> T.C==O(n)
void sortArray(vector<int> &nums)
{
    int i = 0;
    int j = nums.size() - 1;

    while (i <= j)
    {
        while (nums[i] == 0 && i <= j)
        {
            i++;
        }

        while (nums[j] == 1 && i <= j)
        {
            j--;
        }
        if (i <= j)
        {
            swap(nums[i], nums[j]);
            i++;
            j--;
        }
    }
}
// Approach - 2
void sortArray2(vector<int> &nums)
{
    int k = 0;
    int n = nums.size();
    // place all zero's first
    for (int i = 0; i < n; i++)
    {
        if (nums[i] == 0)
        {
            nums[k++] = 0;
        }
    }
    // place all 1's on remaining spaces
    while (k < n)
    {
        nums[k++] = 1;
    }
}
int main()
{
    vector<int> nums;
    nums.push_back(1);
    nums.push_back(1);
    nums.push_back(0);
    nums.push_back(1);
    nums.push_back(0);
    nums.push_back(1);
    nums.push_back(1);
    nums.push_back(0);
    sortArray2(nums);
    for (int i : nums)
    {
        cout << i << " ";
    }
}