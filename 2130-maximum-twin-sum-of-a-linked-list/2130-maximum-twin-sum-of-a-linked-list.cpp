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
    int pairSum(ListNode* head) {
        vector<int>v;
        int max=INT_MIN;
        ListNode*temp=head;
        do{
            v.push_back(temp->val);
            temp=temp->next;
        }while(temp!=NULL);
        int n=v.size();
        for(int i=0;i<(n/2);i++){
            if(v[i]+v[n-1-i] > max)
                max=v[i]+v[n-1-i];
        }
        return max;
    }
};