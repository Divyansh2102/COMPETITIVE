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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1==NULL)
            return list2;
        else if(list2==NULL)
            return list1;
        ListNode*h=NULL;
        if(list1->val <= list2->val){
            h=list1;
            list1=list1->next;
        }
        else{
            h=list2;
            list2=list2->next;
        }
        ListNode*t=h;
        while(list1!=NULL && list2!=NULL){
            ListNode*temp=NULL;
            if(list1->val<=list2->val){
                temp=list1;
                list1=list1->next;
            }
            else{
                temp=list2;
                list2=list2->next;
            }
            t->next=temp;
            t=temp;
        }
        if(list1!=nullptr)
            t->next=list1;
        else if(list2!=NULL)
            t->next=list2;
        return h;
    }
};