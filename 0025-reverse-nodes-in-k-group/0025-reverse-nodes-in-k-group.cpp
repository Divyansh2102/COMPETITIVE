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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode*dummy=new ListNode(0);
        dummy->next=head;
        ListNode*cur,*nxt,*prev;
        cur=nxt=prev=dummy;
        int c=0;
        while(cur->next!=NULL){
            cur=cur->next;
            c++;
        }
        
        while(c>=k){
            cur=prev->next;
            nxt=cur->next;
            for(int i=1;i<k;i++){
                cur->next=nxt->next;
                nxt->next=prev->next;
                prev->next=nxt;
                nxt=cur->next;
            }
            c-=k;
            prev=cur;
        }
        return dummy->next;
    }
};