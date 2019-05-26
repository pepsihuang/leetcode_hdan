/*
ZigZag Conversion
Category	Difficulty	Likes	Dislikes
algorithms	Medium (31.79%)	1025	3193
Tags
Companies
The string "PAYPALISHIRING" is written in a zigzag pattern on a given number of rows like this: (you may want to display this pattern in a fixed font for better legibility)

P   A   H   N
A P L S I I G
Y   I   R
And then read line by line: "PAHNAPLSIIGYIR"

Write the code that will take a string and make this conversion given a number of rows:

string convert(string s, int numRows);
Example 1:

Input: s = "PAYPALISHIRING", numRows = 3
Output: "PAHNAPLSIIGYIR"
Example 2:

Input: s = "PAYPALISHIRING", numRows = 4
Output: "PINALSIGYAHRPI"
Explanation:

P     I    N
A   L S  I G
Y A   H R
P     I


========
结题思路： 
  理解成为一个二维数组，按照正常思维按列放置字符即可。
*/

class Solution {
public:
    string convert(string s, int numRows) {
        
        int s_in = 0;
        int r_in = 0;
        
        vector<string> res(numRows);
        while(true)
        {
            r_in = 0;
            while(r_in < numRows && s_in < s.size())
                res[r_in++].push_back(s[s_in++]);
            
            r_in--;
            while(r_in > 1 && s_in < s.size())
                res[--r_in].push_back(s[s_in++]);
            if(s_in == s.size())
                break;
        }
        string re;
        for(int index = 0;index < numRows; ++index)
            re += res[index];
        return re;
        
    }
};
