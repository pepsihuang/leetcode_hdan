/*
 * @lc app=leetcode.cn id=206 lang=cpp
 *
 * [206] 反转链表
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {

        if (head == NULL || head->next == NULL)
        {
            return head;
        }
        ListNode* cur = head;
        ListNode* newhead = reverseList(cur->next);//cur为4返回了5 
        

        //使得下个节点指向自己
        cur->next->next = cur;//将5翻转指向4
        //使得最后一个节点指向空,否则链表没有终点
        cur->next=NULL;
        //cout<<"cur:"<<cur->val<<"cur_next:"<<cur->next->val<<"next_next:"<<cur->next->next->val<<endl;
        return newhead;//返回5

    }
};
// @lc code=end

