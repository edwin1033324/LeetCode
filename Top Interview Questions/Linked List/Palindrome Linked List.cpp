// Palindrome Linked List

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if (!head || !head->next) 
            return true;
        ListNode *slow = head, *fast = head;
        while (fast->next && fast->next->next) 
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode *last = slow->next, *pre = head;
        while (last->next) 
        {
            ListNode *tmp = last->next;
            last->next = tmp->next;
            tmp->next = slow->next;
            slow->next = tmp;
        }
        while (slow->next) 
        {
            slow = slow->next;
            if (pre->val != slow->val) 
                return false;
            pre = pre->next;
        }
        return true;
    }
};
