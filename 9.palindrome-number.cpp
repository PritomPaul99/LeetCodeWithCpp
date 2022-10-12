/*
 * @lc app=leetcode id=9 lang=cpp
 *
 * [9] Palindrome Number
 */
// #include<vector>
// @lc code=start
class Solution
{
public:
    bool isPalindrome(int x)
    {
        if(x < 0)
        {
            return false;
        }
        int d, i = 0;
        vector<int> v, r;
        while (x != 0)
        {
            d = x % 10;
            x = x / 10;
            v.push_back(d);
            i++;
        }
        r.assign(v.begin(), v.end());
        reverse(r.begin(), r.end());

        if(v==r)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
// @lc code=end
