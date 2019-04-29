/*
 * @lc app=leetcode id=28 lang=cpp
 *
 * [28] Implement strStr()
 */
class Solution {
public:
    int strStr(string haystack, string needle) {
        
        if(needle.size() ==0 )
            return 0;
        for (size_t i = 0; i < haystack.size(); i++)
        {
            size_t j = 0;
            for (; j < needle.size(); j++)
            {
                //std::cout<<haystack[i + j]<<" ? "<<needle[j]<<std::endl;
                if (haystack[i + j] != needle[j])
                    break;
            }
            
            if (j == needle.size())
                return i;
        }
        return -1;
        
    }
};

