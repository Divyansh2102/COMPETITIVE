/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(!head || head->next==NULL)   return 0;
        ListNode*s,*f;
        s=f=head;
        while(f && f->next){
            f=f->next->next;
            s=s->next;
            if(s==f && s!=NULL && f!=NULL)    return 1;
        }
        return 0;
    }
};