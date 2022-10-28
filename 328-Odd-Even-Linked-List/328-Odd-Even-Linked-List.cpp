class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if(!head||!head->next)
            return head;
        ListNode*odd=head,*even=head->next,*evenhead=even;
        while(even&&even->next){
            odd=odd->next=even->next;
            even=even->next=odd->next;
        }
        odd->next=evenhead;
        return head;
    }
};