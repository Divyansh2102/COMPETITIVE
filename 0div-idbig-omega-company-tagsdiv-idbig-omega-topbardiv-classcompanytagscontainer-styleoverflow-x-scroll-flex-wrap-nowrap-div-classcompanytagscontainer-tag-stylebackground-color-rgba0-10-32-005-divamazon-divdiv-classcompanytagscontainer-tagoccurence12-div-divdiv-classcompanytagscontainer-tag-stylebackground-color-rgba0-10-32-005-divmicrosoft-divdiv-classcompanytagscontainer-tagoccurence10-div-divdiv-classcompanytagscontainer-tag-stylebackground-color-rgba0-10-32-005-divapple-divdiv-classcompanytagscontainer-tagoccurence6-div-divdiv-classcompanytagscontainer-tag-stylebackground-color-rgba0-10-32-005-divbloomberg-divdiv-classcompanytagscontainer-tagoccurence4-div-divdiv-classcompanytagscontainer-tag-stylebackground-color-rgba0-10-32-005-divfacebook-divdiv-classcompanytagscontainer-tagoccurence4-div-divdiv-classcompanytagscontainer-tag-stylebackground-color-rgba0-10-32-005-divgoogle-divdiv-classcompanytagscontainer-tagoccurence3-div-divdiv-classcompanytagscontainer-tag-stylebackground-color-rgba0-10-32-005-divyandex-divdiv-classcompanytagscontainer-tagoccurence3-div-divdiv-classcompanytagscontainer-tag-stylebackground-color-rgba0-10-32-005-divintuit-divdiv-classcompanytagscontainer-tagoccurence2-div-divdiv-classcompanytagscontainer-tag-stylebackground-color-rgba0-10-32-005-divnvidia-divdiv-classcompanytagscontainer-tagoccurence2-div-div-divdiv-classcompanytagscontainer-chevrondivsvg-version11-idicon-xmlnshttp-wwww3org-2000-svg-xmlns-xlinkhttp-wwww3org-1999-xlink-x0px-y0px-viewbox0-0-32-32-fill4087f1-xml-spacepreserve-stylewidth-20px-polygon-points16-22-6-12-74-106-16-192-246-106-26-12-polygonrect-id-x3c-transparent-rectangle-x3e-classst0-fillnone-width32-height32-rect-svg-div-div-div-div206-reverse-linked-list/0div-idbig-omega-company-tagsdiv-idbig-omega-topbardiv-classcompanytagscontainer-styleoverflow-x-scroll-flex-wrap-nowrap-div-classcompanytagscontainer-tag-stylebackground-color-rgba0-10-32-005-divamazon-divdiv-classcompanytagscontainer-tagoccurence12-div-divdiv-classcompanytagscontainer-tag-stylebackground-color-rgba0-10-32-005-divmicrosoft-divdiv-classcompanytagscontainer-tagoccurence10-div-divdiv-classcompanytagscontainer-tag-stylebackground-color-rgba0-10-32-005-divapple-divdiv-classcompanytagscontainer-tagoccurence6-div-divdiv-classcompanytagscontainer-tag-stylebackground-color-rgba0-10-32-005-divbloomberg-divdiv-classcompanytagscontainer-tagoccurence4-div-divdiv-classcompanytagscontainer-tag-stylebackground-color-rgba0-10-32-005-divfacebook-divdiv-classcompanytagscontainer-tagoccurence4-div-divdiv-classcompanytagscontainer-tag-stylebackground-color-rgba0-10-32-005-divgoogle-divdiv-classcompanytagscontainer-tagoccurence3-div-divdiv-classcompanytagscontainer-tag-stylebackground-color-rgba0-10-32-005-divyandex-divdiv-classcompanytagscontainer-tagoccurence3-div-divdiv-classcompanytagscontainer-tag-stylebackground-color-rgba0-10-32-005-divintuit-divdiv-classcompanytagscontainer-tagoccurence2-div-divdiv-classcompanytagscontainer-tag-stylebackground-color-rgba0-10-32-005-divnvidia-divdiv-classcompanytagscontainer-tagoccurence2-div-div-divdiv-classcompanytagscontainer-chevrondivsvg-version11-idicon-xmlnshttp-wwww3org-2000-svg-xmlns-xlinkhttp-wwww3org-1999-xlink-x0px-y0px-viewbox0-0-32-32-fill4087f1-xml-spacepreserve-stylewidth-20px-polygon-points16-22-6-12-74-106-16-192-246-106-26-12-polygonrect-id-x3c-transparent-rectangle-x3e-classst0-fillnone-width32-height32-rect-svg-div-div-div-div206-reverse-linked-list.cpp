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
    ListNode* reverseList(ListNode* head) {
        if(head==NULL)  return head;
        ListNode*prev,*cur,*nxt;
        prev=0,cur=nxt=head;
        while(nxt!=NULL){
            nxt=nxt->next;
            cur->next=prev;
            prev=cur;
            cur=nxt;
        }
        head=prev;
        return head;
    }
};