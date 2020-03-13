/*
 * @lc app=leetcode.cn id=3 lang=cpp
 *
 * [3] 无重复字符的最长子串
 *
 * https://leetcode-cn.com/problems/longest-substring-without-repeating-characters/description/
 *
 * algorithms
 * Medium (32.04%)
 * Likes:    3276
 * Dislikes: 0
 * Total Accepted:    381K
 * Total Submissions: 1.1M
 * Testcase Example:  '"abcabcbb"'
 *
 * 给定一个字符串，请你找出其中不含有重复字符的 最长子串 的长度。
 * 
 * 示例 1:
 * 
 * 输入: "abcabcbb"
 * 输出: 3 
 * 解释: 因为无重复字符的最长子串是 "abc"，所以其长度为 3。
 * 
 * 
 * 示例 2:
 * 
 * 输入: "bbbbb"
 * 输出: 1
 * 解释: 因为无重复字符的最长子串是 "b"，所以其长度为 1。
 * 
 * 
 * 示例 3:
 * 
 * 输入: "pwwkew"
 * 输出: 3
 * 解释: 因为无重复字符的最长子串是 "wke"，所以其长度为 3。
 * 请注意，你的答案必须是 子串 的长度，"pwke" 是一个子序列，不是子串。
 * 
 * 
 */

// @lc code=start
class Solution {
public:

/*
hashmap方式



*/

/*
滑动窗口的方式
每移动一位，就与之前的字符串进行对比
如果找到，则以找到的那位字符下一个位置作为起始点。
如果没找到，则加长字符串。

结果：
Accepted
987/987 cases passed (20 ms)
Your runtime beats 60.14 % of cpp submissions
Your memory usage beats 12.45 % of cpp submissions (22.2 MB)

运行时间 O(n)
运行空间 O(n) 

优化想法，
是否可以不要去存子段。而是记录子段的位置？


*/
    int lengthOfLongestSubstring(string s) {
        if (s.size() ==0)
        {
            return 0;
        }
        else if (s.size() == 1)
        {
            return 1;
        }
        
        
        int max = 0;
        int a = 0;
        string sub;
        sub = s.substr(0,1);
        for (size_t b = 1; b < s.size(); b++)
        {
            size_t ff = sub.find(s[b]);
            sub += s.substr(b,1);
            if (ff != string::npos)
            {
                sub = sub.substr(ff+1,sub.size()-ff);
            }
            if(sub.size() > max)
                max = sub.size();

            //去掉这行调试信息，运行效率提升35%左右。。。
            //cout<<sub<<endl; 
             
        }
        return max;
    }


};
// @lc code=end

