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
    void reorderList(ListNode* head) {
        ListNode*pt=head,*ppt=head;
        stack<ListNode*>st;
        int n=0;
        while(pt!=NULL){
            st.push(pt);
            pt=pt->next;
            n+=1;
        }
        for(int i=0;i<n/2;i++){
            ListNode*ele=st.top();
            st.pop();
            ele->next=ppt->next;
            ppt->next=ele;
            ppt=ppt->next->next;
        }
        ppt->next=NULL;
    }
};