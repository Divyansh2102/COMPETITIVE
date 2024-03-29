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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(!head || n==0)   return head;
        ListNode*s,*f;
        s=f=head;
        while(n>0){
            f=f->next;
            n-=1;
        }
        if(f==NULL){
            head=head->next;
            return head;
        }
        while(f->next!=NULL){
            s=s->next;
            f=f->next;
        }
        s->next=s->next->next;
        return head;
    }
};