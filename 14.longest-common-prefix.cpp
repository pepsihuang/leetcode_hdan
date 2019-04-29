/*
 * @lc app=leetcode id=14 lang=cpp
 *
 * [14] Longest Common Prefix
 *
 * https://leetcode.com/problems/longest-common-prefix/description/
 *
 * algorithms
 * Easy (32.95%)
 * Total Accepted:    429.2K
 * Total Submissions: 1.3M
 * Testcase Example:  '["flower","flow","flight"]'
 *
 * Write a function to find the longest common prefix string amongst an array
 * of strings.
 * 
 * If there is no common prefix, return an empty string "".
 * 
 * Example 1:
 * 
 * 
 * Input: ["flower","flow","flight"]
 * Output: "fl"
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: ["dog","racecar","car"]
 * Output: ""
 * Explanation: There is no common prefix among the input strings.
 * 
 * 
 * Note:
 * 
 * All given inputs are in lowercase letters a-z.
 * 
 */
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string res;
        if (strs.size() == 0)
            return res;
        
        if (strs.size() == 1)
            return strs[0];
        
        
        size_t i = 0;
        for (; i < strs[0].size(); ++i)
        {
            for (size_t j = 1; j < strs.size(); ++j)
            {
                if (strs[j].size() < i)
                {
                    return res;
                }
                if (strs[j][i] != strs[0][i])
                {
                    return res;
                }
            }
            res += strs[0][i];
            
        }
        return res;
        
        
    }
};

