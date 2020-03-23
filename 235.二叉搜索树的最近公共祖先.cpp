/*
 * @lc app=leetcode.cn id=235 lang=cpp
 *
 * [235] 二叉搜索树的最近公共祖先
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:

    


    //利用搜索树的特性来进行循环查找
    /*
Accepted
27/27 cases passed (32 ms)
Your runtime beats 96.05 % of cpp submissions
Your memory usage beats 100 % of cpp submissions (25.1 MB)
    
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {

        while(root){

            if (root->val > p->val && root->val > q->val)
            {
                root = root->left;
            }
            else if(root->val < p->val && root->val < q->val)
            {
                root = root->right;
            }
            else
            {
                return root;
            } 
            
        }
        return root;
    }
*/

/*
//利用搜索树的特性来进行递归查找
//Accepted
//27/27 cases passed (32 ms)
//Your runtime beats 96.05 % of cpp submissions
//Your memory usage beats 100 % of cpp submissions (25.2 MB)

    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if (!root || !p || !q)
        {
            return root;
        }
        
        if (root->val > p->val && root->val > q->val)
        {
           return lowestCommonAncestor(root->left, p, q);
        }
        else if(root->val < p->val && root->val < q->val)
        {
           return lowestCommonAncestor(root->right, p, q);
        }
        else
        {
            return root;
        } 
    }
*/
    
};

// @lc code=end

