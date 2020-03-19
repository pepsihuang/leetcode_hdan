/*
 * @lc app=leetcode.cn id=75 lang=cpp
 *
 * [75] 颜色分类
 */

// @lc code=start
class Solution {
public:

    //挖坑填数
    int myArray(int left, int right,  vector<int>& nums) {

        int x = nums[left];//左边第一个

        while(left < right){

            while (left < right && nums[right] >= x)
            {
                right--;
            }
            if (left < right)
            {
                nums[left] = nums[right];
                left++;
            }


            while (left < right && nums[left] < x)
            {
                left++;
            }
            if (left < right)
            {
                nums[right] = nums[left];
                right--;
            }
        }
        nums[left] = x;//left == right

        return left;
    }


    void MySort(int left, int right, vector<int>& nums)
    {

        if (left < right )
        {
            int mi = myArray(left, right, nums);
            MySort(left, mi, nums);
            MySort(mi+1, right, nums);
        }
        
    }

    void sortColors(vector<int>& nums) {
        if (nums.size() == 0)
        {
            return;
        }

        //快速排序
        int left = 0, right = nums.size()-1;
        MySort(left, right, nums);
        
        
    }
};
// @lc code=end

