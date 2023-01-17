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
        ListNode*prev,*current,*nextN;
        prev=0,current=nextN=head;
        while(nextN!=NULL){
            nextN=nextN->next;
            current->next=prev;
            prev=current;
            current=nextN;
        }
        head=prev;
        return head;
    }
};