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
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head || !head->next)    return head;
        ListNode*s,*f;
        s=head,f=head->next;
        while(f!=NULL){
            while(f && f->next && f->val==f->next->val) f=f->next;
            if(s->val==f->val){
                head=s=f->next;
                if(head!=NULL)  f=f->next->next;
                else    return NULL;
            }
            else if(s->next==f){
                s=s->next;
                f=f->next;
            }
            else{
                f=f->next;
                s->next=f;
            }
        }
        return head;
    }
};