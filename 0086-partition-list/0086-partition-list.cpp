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
    ListNode* partition(ListNode* head, int x) {
        ListNode*bh=new ListNode();
        ListNode*b=bh;
        ListNode*ah=new ListNode();
        ListNode*a=ah;
        while(head!=NULL){
            if(head->val<x){
                b->next=head;
                b=b->next;
            }
            else{
                a->next=head;
                a=a->next;
            }
            head=head->next;
        }
        a->next=NULL;
        b->next=ah->next;
        return bh->next;
    }
};