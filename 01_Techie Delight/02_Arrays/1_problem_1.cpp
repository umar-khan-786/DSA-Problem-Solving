#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*

Given an unsorted integer array, find a pair with the given sum in it.

• Each input can have multiple solutions. The output should match with either one of them.

Input : nums[] = [8, 7, 2, 5, 3, 1], target = 10
Output: (8, 2) or (7, 3)

• The solution can return pair in any order. If no pair with the given sum exists, the solution should return the pair (-1, -1).

Input : nums[] = [5, 2, 6, 8, 1, 9], target = 12
Output: (-1, -1)

*/

// Brute Foce Solution
pair<int, int> findPair(vector<int> nums, int target)
{
    pair<int, int> ans;
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = i + 1; j < nums.size(); j++)
        {
            if (nums[i] + nums[j] == target)
            {
                ans.first = nums[i];
                ans.second = nums[j];
                return ans;
            }
        }
    }
    ans.first = -1;
    ans.second = -1;
    return ans;
}

// Using Sorting
pair<int, int> findPair1(vector<int> nums, int target)
{
    sort(nums.begin(), nums.end());
    int s = 0;
    int e = nums.size() - 1;
    pair<int, int> ans;
    while (s < e)
    {
        if (nums[s] + nums[e] == target)
        {
            ans.first = nums[s];
            ans.second = nums[e];
            return ans;
        }
        (nums[s] + nums[e] < target ? s++ : e--);
    }
    ans.first = -1;
    ans.second = -1;
    return ans;
}
int main()
{
    vector<int> nums;
    nums.push_back(8);
    nums.push_back(7);
    nums.push_back(5);
    nums.push_back(3);
    nums.push_back(2);
    nums.push_back(1);
    pair<int, int> ans = findPair1(nums, 10);
    cout << ans.first << " " << ans.second << endl;
}