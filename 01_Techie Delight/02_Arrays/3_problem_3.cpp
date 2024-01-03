#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
/*

Given an integer array, find a pair with the maximum product in it.

Each input can have multiple solutions. The output should match with either one of them.

Input : [-10, -3, 5, 6, -2]
Output: (-10, -3) or (-3, -10) or (5, 6) or (6, 5)

Input : [-4, 3, 2, 7, -5]
Output: (3, 7) or (7, 3)

If no pair exists, the solution should return the pair (-1, -1).

Input : [1]
Output: (-1, -1)

*/
pair<int, int> findPair(vector<int> nums)
{
    pair<int, int> ans;
    ans.first = -1;
    ans.second = -1;
    int temp = 1;

    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = i + 1; j < nums.size(); j++)
        {
            if (nums[i] * nums[j] >= temp)
            {
                temp = nums[i] * nums[j];
                ans.first = nums[i];
                ans.second = nums[j];
            }
        }
    }
    return ans;
}
pair<int, int> findPair2(vector<int> nums)
{
    if (nums.size() < 2)
    {
        pair<int, int> ans;
        ans.first = -1;
        ans.second = -1;
        return ans;
    }
    int n = nums.size();
    pair<int, int> ans;
    sort(nums.begin(), nums.end());
    if (nums[0] * nums[1] > nums[n - 1] * nums[n - 2])
    {
        ans.first = nums[0];
        ans.second = nums[1];
    }
    else
    {
        ans.first = nums[n - 1];
        ans.second = nums[n - 2];
    }
    return ans;
}
int main()
{
    vector<int> nums;
    nums.push_back(-10);
    nums.push_back(-3);
    nums.push_back(5);
    nums.push_back(6);
    nums.push_back(-2);
    pair<int, int> ans = findPair2(nums);
    cout << ans.first << " " << ans.second << endl;
}