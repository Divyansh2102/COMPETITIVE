/*
// Definition for a Node.
class Node {
    int val;
    Node next;
    Node random;

    public Node(int val) {
        this.val = val;
        this.next = null;
        this.random = null;
    }
}
*/

class Solution {
    private void insertNext(Node head){
        Node temp=head;
        while(temp!=null){
            Node nEle=temp.next;
            Node copy=new Node(temp.val);
            copy.next=nEle;
            temp.next=copy;
            temp=nEle;
        }
    }
    
    private void connectR(Node head){
        Node temp=head;
        while(temp!=null){
            if(temp.random ==null)   temp.random=null;
            else    temp.next.random=temp.random.next;
            temp=temp.next.next;
        }
    }
    public Node copyRandomList(Node head) {
        insertNext(head);
        connectR(head);
        Node dummy = new Node(0);
        Node itr = head;
        Node temp = dummy;
        Node fast;
        while(itr != null) {
            fast = itr.next.next;
            temp.next = itr.next;
            itr.next = fast;
            temp = temp.next;
            itr = fast;
        }
        return dummy.next;
    }
}