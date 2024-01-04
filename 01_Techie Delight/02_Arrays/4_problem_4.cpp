#include <iostream>
#include <vector>
using namespace std;

/*

Given an integer array, return all equilibrium index in it. For an array `A[0..n-1]`, index `i` is an equilibrium index if the sum of elements of subarray `A[0…i-1]` is equal to the sum of elements of subarray `A[i+1…n-1]`.

Input : [0, -3, 5, -4, -2, 3, 1, 0]
Output: {0, 3, 7}
Explanation: For each index `i` in the output, A[0] + A[1] + … + A[i-1] = A[i+1] + A[i+2] + … + A[n-1]

Input : [-7, 3, 7, -3, 1]
Output: {4}
Explanation: `n-1` is an equilibrium index if A[0] + A[1] + … + A[n-2] sums to 0.

Input : [1, 2, -4, 2]
Output: {0}
Explanation: 0 is an equilibrium index if A[1] + A[2] + … + A[n-1] sums to 0.

*/

vector<int> findEquilibriumIndex(vector<int> nums)
{
    vector<int> indices;
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        int sum1 = 0, sum2 = 0;
        int a = 0;
        int b = i + 1;

        while (a < i)
        {
            sum1 += nums[a];
            a++;
        }

        while (b < n)
        {
            sum2 += nums[b];
            b++;
        }

        if (sum1 == sum2)
        {
            indices.push_back(i);
        }
    }

    return indices;
}

int main()
{
    vector<int> nums;

    // test case - 1
    // nums.push_back(0);
    // nums.push_back(-3);
    // nums.push_back(5);
    // nums.push_back(-4);
    // nums.push_back(-2);
    // nums.push_back(3);
    // nums.push_back(1);
    // nums.push_back(0);

    // test case - 2
    // nums.push_back(-7);
    // nums.push_back(3);
    // nums.push_back(7);
    // nums.push_back(-3);
    // nums.push_back(1);

    // test case - 3
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(-4);
    nums.push_back(2);

    vector<int> ans = findEquilibriumIndex(nums);
    cout << "Equilibrium Indexes are: ";
    for (int i : ans)
    {
        cout << i << " ";
    }
}