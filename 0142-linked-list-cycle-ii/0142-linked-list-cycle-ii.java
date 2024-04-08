/**
 * Definition for singly-linked list.
 * class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) {
 *         val = x;
 *         next = null;
 *     }
 * }
 */
public class Solution {
    public ListNode detectCycle(ListNode head) {
        if(head==null || head.next==null)   return null;
        ListNode s=head,f=head;
        while(f.next != null && f.next.next!=null){
            f=f.next.next;
            s=s.next;
            if(s==f){
                ListNode temp=head;
                while(temp!=s){
                    temp=temp.next;
                    s=s.next;
                }
                return s;
            }
        }
        return null;
    }
}