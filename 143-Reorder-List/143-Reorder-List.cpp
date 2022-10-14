class Solution {
public:
    void reorderList(ListNode* head) {
        ListNode*temp=head;
        vector<int>v;
        while(temp!=NULL){
            v.push_back(temp->val);
            temp=temp->next;
        }
        vector<int>a(v.size()+1,0);
        int i=0,j=v.size()-1,x=0;
        while(i<=j && x<v.size()){
            a[x++]=v[i++];
            a[x++]=v[j--];
        }
        x=0;
        while(head!=NULL){
            head->val=a[x++];
            head=head->next;
        }
        return;
    }
};