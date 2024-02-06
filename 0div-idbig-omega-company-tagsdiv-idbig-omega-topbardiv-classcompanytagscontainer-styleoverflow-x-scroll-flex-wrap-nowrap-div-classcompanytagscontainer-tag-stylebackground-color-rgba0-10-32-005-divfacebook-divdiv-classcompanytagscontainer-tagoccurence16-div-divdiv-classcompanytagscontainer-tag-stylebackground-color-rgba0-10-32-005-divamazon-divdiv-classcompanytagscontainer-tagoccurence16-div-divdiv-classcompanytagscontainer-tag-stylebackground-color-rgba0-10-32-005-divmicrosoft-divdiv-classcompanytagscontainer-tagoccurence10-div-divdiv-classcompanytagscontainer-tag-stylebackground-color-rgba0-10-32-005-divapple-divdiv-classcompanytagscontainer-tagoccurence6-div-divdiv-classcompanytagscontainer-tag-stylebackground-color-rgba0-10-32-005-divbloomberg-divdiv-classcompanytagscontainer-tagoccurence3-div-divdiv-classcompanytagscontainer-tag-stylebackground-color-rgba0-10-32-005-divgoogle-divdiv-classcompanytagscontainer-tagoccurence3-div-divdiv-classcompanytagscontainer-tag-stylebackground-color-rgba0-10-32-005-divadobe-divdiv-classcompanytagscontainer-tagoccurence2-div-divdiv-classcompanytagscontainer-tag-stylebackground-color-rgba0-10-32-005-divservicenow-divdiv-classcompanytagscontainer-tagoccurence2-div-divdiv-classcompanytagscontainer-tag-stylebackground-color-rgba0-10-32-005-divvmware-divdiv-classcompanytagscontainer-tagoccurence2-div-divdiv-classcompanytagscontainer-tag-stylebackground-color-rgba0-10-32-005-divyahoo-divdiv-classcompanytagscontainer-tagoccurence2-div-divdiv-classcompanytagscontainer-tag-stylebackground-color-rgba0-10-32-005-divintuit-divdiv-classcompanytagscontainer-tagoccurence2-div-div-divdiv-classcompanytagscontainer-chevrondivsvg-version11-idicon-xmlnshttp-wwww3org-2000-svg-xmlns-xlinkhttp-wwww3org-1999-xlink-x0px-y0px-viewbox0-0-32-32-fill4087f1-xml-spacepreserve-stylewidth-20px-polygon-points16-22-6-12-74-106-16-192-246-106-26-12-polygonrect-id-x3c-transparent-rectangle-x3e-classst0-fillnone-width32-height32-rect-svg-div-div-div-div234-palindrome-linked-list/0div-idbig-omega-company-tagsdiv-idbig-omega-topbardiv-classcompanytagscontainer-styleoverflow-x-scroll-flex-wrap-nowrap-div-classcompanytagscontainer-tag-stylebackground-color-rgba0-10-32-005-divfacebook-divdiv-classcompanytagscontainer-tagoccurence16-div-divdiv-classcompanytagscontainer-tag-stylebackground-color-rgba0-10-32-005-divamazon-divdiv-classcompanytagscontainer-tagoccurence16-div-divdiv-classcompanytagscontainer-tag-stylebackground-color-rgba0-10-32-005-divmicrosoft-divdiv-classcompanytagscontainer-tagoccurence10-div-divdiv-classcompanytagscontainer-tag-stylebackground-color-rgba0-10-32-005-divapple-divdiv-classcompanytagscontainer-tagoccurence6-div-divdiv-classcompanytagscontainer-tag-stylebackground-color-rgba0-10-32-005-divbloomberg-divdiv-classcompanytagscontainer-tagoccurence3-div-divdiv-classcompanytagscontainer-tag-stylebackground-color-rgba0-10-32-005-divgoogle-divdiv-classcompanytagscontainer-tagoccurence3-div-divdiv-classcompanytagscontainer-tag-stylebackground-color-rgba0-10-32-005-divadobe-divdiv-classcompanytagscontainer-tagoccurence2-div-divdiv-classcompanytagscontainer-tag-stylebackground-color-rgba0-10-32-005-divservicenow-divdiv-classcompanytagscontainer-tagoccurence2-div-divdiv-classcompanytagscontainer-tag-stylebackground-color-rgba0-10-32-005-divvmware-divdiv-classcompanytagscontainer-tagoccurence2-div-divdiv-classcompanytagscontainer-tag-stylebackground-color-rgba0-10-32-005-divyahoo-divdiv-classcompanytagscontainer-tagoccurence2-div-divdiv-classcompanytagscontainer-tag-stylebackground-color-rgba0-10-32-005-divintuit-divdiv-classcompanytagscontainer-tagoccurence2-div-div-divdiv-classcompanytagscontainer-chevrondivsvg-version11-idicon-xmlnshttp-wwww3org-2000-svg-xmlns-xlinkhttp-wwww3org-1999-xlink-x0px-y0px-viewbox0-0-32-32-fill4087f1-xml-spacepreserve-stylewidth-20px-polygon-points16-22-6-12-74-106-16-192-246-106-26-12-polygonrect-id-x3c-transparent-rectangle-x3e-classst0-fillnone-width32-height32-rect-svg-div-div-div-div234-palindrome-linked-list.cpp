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
    ListNode*rev(ListNode*temp){
        ListNode*prev,*cur,*nxt;
        prev=NULL;
        cur=nxt=temp;
        while(nxt){
            nxt=nxt->next;
            cur->next=prev;
            prev=cur;
            cur=nxt;
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {
        if(head==NULL || head->next==NULL)  return true;
        ListNode*s,*f;
        s=f=head;
        while(f->next!=NULL && f->next->next!=NULL){
            s=s->next;
            f=f->next->next;
        }
        s->next=rev(s->next);
        s=s->next;
        f=head;
        while(s){
            if(s->val!=f->val)  return 0;
            s=s->next;
            f=f->next;
        }
        return 1;
    }
};