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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode*f=headA,*s=headB;
        int c=0;
        while(f!=s){
            if(c>2)
                return NULL;
            if(f->next)
                f=f->next;
            else{
                f=headB;
                c++;
            }
            if(s->next)
                s=s->next;
            else{
                s=headA;
                c++;
            }
        }
        return f;
    }
};