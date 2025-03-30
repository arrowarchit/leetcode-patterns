class Solution {
public:
    ListNode* reverseList(ListNode* head) {         //O(n)
        ListNode* curr=head;
        ListNode* prev=NULL;
        ListNode* nxt;
        while(curr)
        {
            nxt=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nxt;
        }
        return prev;
    }
};