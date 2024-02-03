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
    ListNode* oddEvenList(ListNode* head) {
        if(head==NULL || head->next==NULL)  return head;
        ListNode*cur,*nn,*prev;
        prev=NULL;
        cur=head;
        nn=head->next;
        prev=nn;
        while(nn && nn->next){
            cur=cur->next=nn->next;
            nn=nn->next=cur->next;
        }
        cur->next=prev;
        return head;
    }
};