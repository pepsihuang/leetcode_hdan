/*
 * @lc app=leetcode.cn id=50 lang=cpp
 *计算X的n次方
 * [50] Pow(x, n)
 */
// @lc code=start
class Solution {
public:
//使用递归的方法进行计算 时间复杂度为O(logn)
    double myPow(double x, long n) {
        cout<<x<<"  "<<n<<endl;
        if ( n == 0)
        {
            return 1.0f;
        }
        if (n < 0)
        {
            return 1/myPow(x, -n);
        }

        if (n%2)
        {
            //奇数
            return x*myPow(x, n-1);
        }
        return myPow(x*x, n/2);

    }
};
// @lc code=end

