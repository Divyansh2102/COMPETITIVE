/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode reverseKGroup(ListNode head, int k) {
        if(head==null || k==1)  return head;
        ListNode dummy=new ListNode(0);
        dummy.next=head;
        ListNode prev=dummy,cur=dummy,nxt=dummy;
        int cnt=0;
        while(cur.next!=null){
            cnt+=1;
            cur=cur.next;
        }
        while(cnt>=k){
            cur=prev.next;
            nxt=cur.next;
            for(int i=1;i<k;i++){
                cur.next=nxt.next;
                nxt.next=prev.next;
                prev.next=nxt;
                nxt=cur.next;
            }
            prev=cur;
            cnt-=k;
        }
        return dummy.next;
    }
}