class Solution {
public:
    void deleteNode(ListNode* node) 
    {
        ListNode *p = node;
        p->val = p->next->val;
        p->next = p->next->next; 
    }
};
