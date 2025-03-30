//Given the head of a sorted linked list, delete all duplicates such that each element appears only once. Return the linked list sorted as well.

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        while(head && head->next && head->val==head->next->val)
            head=head->next;
        ListNode* curr=head;
        while(curr && curr->next)
        {
            if(curr->val==curr->next->val)
            {
                curr->next=curr->next->next;
                continue;
            }
            curr=curr->next;
        }
        return head;
    }
};