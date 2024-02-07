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
    ListNode*getmid(ListNode*head){
        ListNode*s,*f;
        s=f=head;
        while(f){
            f=f->next;
            if(f)   f=f->next;
            if(f)
                s=s->next;
        }
        return s;
    }
    ListNode*merge(ListNode*a,ListNode*b){
        if(a==NULL) return b;
        if(b==NULL) return a;
        ListNode temp(0),*pm=&temp;
        ListNode *p1=a,*p2=b;
        while(p1 || p2){
            if(p1==NULL){
                pm->next=p2;
                pm=pm->next;
                p2=p2->next;
            }
            else if(p2==NULL){
                pm->next=p1;
                pm=pm->next;
                p1=p1->next;
            }
            else {
                if(p1->val<p2->val){
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
        return temp.next;
    }
    ListNode*mergeSort(ListNode*head){
        if(head==NULL || head->next==NULL)  return head;
        ListNode*mid=getmid(head);
        ListNode*nmid=mid->next;
        mid->next=NULL;
        head=mergeSort(head);
        nmid=mergeSort(nmid);
        head=merge(head,nmid);
        return head;
    } 
    ListNode* sortList(ListNode* head) {
        return mergeSort(head);
    }
};