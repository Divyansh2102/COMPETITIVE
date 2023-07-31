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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL)  return head;
        ListNode*s,*f;
        s=head;
        while(s->next){
            if(s->val==s->next->val){
                f=s->next->next;
                delete s->next;
                s->next=f;
            }
            else    s=s->next;
        }
        return head;
    }
};