/*
 * @lc app=leetcode.cn id=236 lang=cpp
 *
 * [236] 二叉树的最近公共祖先
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
    /*
    将树分为左右两边.
    递归的查找,
        当左边找到其中一个并且右边找到另外一个则此时的root就是答案
        当左边找不到时,那两个肯定都在右边. (右边同理)
        
    */

    TreeNode* FindQorP(TreeNode* root,  TreeNode* p, TreeNode* q){
        if (!root || root->val == p->val || root->val == q->val)
        {
            return root;
        }

        TreeNode* left = FindQorP(root->left, p, q);
        TreeNode* right = FindQorP(root->right, p, q);

        if (left == NULL)//当root是叶子结点时,也就意味着left和right都是NULL
        {
            //都在右边
            return right;
        }
        else if(right == NULL)
        {
            //都在左边
            return left;
        }
        else
        {
            return root;//此处会直接找到
        }
        
        
        

    }


    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if (!root || !q || !p)
        {
            return root;
        }
        
        return FindQorP(root, p, q);
        
    }
};
// @lc code=end

