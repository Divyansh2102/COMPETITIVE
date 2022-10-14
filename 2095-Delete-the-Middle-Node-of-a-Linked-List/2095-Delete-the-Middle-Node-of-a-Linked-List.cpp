class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if(head->next==NULL)
            return NULL;
        ListNode*s=head;
        ListNode*f=head;
        while(f!=NULL && f->next!=NULL){
            s=s->next;
            f=f->next->next;
        }
        if(s->next==NULL){
            head->next=NULL;
            return head;
        }
        s->val=s->next->val;
        s->next=s->next->next;
        
        return head;
    }
};