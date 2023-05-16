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
    ListNode* swapPairs(ListNode* head) {
        if(head==NULL || head->next==NULL)  return head;
        ListNode*temp=new ListNode(-1);
        ListNode*prev=temp,*cur=head;
        temp->next=head;
        while(cur!=NULL && cur->next!=NULL){
            prev->next=cur->next;
            cur->next=cur->next->next;
            prev->next->next=cur;
            cur=cur->next;
            prev=prev->next->next;
        }
        return temp->next;
    }
};