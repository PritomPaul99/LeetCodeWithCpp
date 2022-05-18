/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */

// @lc code=start
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        int s = nums.size();
        for (int i = 0; i < s; i++)
        {
            for (int j = i+1; j < s; j++)
            {
                if(target == nums[i]+nums[j])
                    return {i, j};
            }
            
        }
        return {-1, -1};
    }
};
// @lc code=end
