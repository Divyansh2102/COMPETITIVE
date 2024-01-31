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
        ListNode*p,*q;
        p=temp;
        q=NULL;
        while(p!=NULL){
            ListNode*cur=p->next;
            p->next=q;
            q=p;
            p=cur;
        }
        return q;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode*p=rev(l1);
        ListNode*q=rev(l2);
        ListNode*head,*last;
        head=last=new ListNode(-1);
        
        int c=0;
        while(p!=NULL || q!=NULL){
            int d=(p!=NULL?p->val:0)+(q!=NULL?q->val:0)+c;
            ListNode*temp=new ListNode(d%10);
            last->next=temp;
            last=temp;
            
            c=d/10;
            if(p)   p=p->next;
            if(q)   q=q->next;
            
        }
        if(c!=0){
            ListNode*temp=new ListNode(c);
            last->next=temp;
            last=temp;
        }
        head=head->next;
        head=rev(head);
        return head;
        
    }
};