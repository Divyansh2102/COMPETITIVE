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
        if(headA==nullptr || headB==nullptr)
            return nullptr;
        ListNode *h1=headA;
        while(h1!=nullptr){
            ListNode *h2=headB;
            while(h2!=nullptr){
                if(h1==h2)
                    return h1;
                h2=h2->next;
            }
            h1=h1->next;
        }
        return nullptr;
    }
};