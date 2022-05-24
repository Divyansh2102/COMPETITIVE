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
private:
    static ListNode*getMid(ListNode*head){
        ListNode*fast=head;
        ListNode*slow=head;
        while(fast!=nullptr){
            fast=fast->next;
            if(fast!=NULL)
                fast=fast->next;
            if(fast!=NULL)
                slow=slow->next;
        }
        return slow;
    }
    static ListNode*merge(ListNode*l1,ListNode*l2){
        if(l1==nullptr)
            return l2;
        else if(l2==nullptr)
            return l1;
        ListNode dummyHead(0),*pm=&dummyHead;
        ListNode*p1=l1,*p2=l2;
        while(p1!=nullptr || p2!=nullptr){
            if(p1==nullptr){
                pm->next=p2;
                pm=pm->next;
                p2=p2->next;
            }
            else if(p2==nullptr){
                pm->next=p1;
                pm=pm->next;
                p1=p1->next;
            }
            else{
                if(p1->val < p2->val){
                    pm->next=p1;
                    pm=pm->next;
                    p1=p1->next;
                }
                else{
                    pm->next=p2;
                    pm=pm->next;
                    p2=p2->next;
                }
            }
        }
        return dummyHead.next;
    }
    static ListNode *mergeSort(ListNode*head){
        if(head==nullptr || head->next==nullptr)
            return head;
        ListNode*mid=getMid(head);
        ListNode*smid=mid->next;
        mid->next=nullptr;
        head=mergeSort(head);
        smid=mergeSort(smid);
        head=merge(head,smid);
        return head;
    }
public:
    ListNode* sortList(ListNode* head) {
        return mergeSort(head);   
    }
};