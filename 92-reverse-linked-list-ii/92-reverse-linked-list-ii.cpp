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
    int leng(ListNode*head){
        ListNode *temp=head;
        int l=0;
        do{
            temp=temp->next;
            l++;
        }while(temp!=NULL);
        return l;
    }
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        int l=leng(head);
        if(l==1)
            return head;
        while(left<right){
            int i=1,x,y;
            ListNode*temp=head;
            while(i<right){
                if(i==left)
                    x=temp->val;
                temp=temp->next;
                i++;
            }
            y=temp->val;
            temp->val=x;
            temp=head;
            i=1;
            while(i<left){
                temp=temp->next;
                i++;
            }
            temp->val=y;
            left++,right--;
        }
        return head;
    }
};