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
    int len(ListNode*head){
        if(head==NULL)  return 0;
        ListNode*temp=head;
        int i=0;
        do{
            temp=temp->next;
            i+=1;
        }while(temp!=NULL);
        return i;
    }
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        int l=len(head);
        int i=1,x,y;
        ListNode*temp=head;
        while(left<right){
            while(i<right){
                if(i==left){
                    x=temp->val;
                }
                temp=temp->next;
                i+=1;
            }
            y=temp->val;
            temp->val=x;
            i=1;
            temp=head;
            while(i<left){
                temp=temp->next;
                i+=1;
            }
            temp->val=y;
            left++,right--;
        }
        return head;
    }
};