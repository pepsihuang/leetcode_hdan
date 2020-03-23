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

    TreeNode* FindQorP(TreeNode* root,  TreeNode* p, TreeNode* q){
        if (!root || root->val == p->val || root->val == q->val)
        {
            return root;
        }

        TreeNode* left = FindQorP(root->left, p, q);
        TreeNode* right = FindQorP(root->right, p, q);

        if (left == NULL)
        {
            //都在右边
            return right;
        }
        else if(right == NULL)
        {
            return left;
        }
        else
        {
            return root;
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

