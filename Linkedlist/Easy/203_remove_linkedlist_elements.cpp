//Given the head of a linked list and an integer val, remove all the nodes of the linked list that has Node.val == val, and return the new head.

class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        if(head==NULL) return head;
        while(head && head->val==val)
        {
            head=head->next;
        }
        ListNode* curr=head;
        while(curr)
        {
            while(curr->next && curr->next->val==val)
            {
                curr->next=curr->next->next;
            }
            curr=curr->next;
        }
        return head;
    }
};