/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(head==NULL)  return head;
        Node*temp=head;
        while(temp!=NULL){
            Node*t=new Node(temp->val);
            t->next=temp->next;
            temp->next=t;
            temp=t->next;
        }
        temp=head;
        while(temp!=NULL){
            if(temp->random!=NULL)
                temp->next->random=temp->random->next;
            else
                temp->next->random=NULL;
            temp=temp->next->next;
        }
        Node*dummy=new Node(0);
        Node*copy=head->next;
        dummy->next=copy;
        temp=head;
        while(copy!=NULL && copy->next!=NULL){
            temp->next=copy->next;
            copy->next=copy->next->next;
            temp=temp->next;
            copy=copy->next;
        }
        temp->next=NULL;
        return dummy->next;
    }
};