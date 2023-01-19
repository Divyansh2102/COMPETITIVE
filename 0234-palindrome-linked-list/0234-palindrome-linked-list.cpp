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
    ListNode*rev(ListNode*head){
        ListNode*prev=0,*cur=head,*nxt=head;
        while(nxt!=NULL){
            nxt=nxt->next;
            cur->next=prev;
            prev=cur;
            cur=nxt;
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {
        if(head==NULL || head->next==NULL)  return true;
        ListNode*slow,*fast;
        slow=fast=head;
        while(fast->next!=NULL && fast->next->next!=NULL ){
            fast=fast->next->next;
            slow=slow->next;
        }
        slow->next=rev(slow->next);
        slow=slow->next;
        fast=head;
        while(slow!=NULL){
            if(fast->val!=slow->val)
                return false;
            fast=fast->next;
            slow=slow->next;
        }
        return true;
    }
};