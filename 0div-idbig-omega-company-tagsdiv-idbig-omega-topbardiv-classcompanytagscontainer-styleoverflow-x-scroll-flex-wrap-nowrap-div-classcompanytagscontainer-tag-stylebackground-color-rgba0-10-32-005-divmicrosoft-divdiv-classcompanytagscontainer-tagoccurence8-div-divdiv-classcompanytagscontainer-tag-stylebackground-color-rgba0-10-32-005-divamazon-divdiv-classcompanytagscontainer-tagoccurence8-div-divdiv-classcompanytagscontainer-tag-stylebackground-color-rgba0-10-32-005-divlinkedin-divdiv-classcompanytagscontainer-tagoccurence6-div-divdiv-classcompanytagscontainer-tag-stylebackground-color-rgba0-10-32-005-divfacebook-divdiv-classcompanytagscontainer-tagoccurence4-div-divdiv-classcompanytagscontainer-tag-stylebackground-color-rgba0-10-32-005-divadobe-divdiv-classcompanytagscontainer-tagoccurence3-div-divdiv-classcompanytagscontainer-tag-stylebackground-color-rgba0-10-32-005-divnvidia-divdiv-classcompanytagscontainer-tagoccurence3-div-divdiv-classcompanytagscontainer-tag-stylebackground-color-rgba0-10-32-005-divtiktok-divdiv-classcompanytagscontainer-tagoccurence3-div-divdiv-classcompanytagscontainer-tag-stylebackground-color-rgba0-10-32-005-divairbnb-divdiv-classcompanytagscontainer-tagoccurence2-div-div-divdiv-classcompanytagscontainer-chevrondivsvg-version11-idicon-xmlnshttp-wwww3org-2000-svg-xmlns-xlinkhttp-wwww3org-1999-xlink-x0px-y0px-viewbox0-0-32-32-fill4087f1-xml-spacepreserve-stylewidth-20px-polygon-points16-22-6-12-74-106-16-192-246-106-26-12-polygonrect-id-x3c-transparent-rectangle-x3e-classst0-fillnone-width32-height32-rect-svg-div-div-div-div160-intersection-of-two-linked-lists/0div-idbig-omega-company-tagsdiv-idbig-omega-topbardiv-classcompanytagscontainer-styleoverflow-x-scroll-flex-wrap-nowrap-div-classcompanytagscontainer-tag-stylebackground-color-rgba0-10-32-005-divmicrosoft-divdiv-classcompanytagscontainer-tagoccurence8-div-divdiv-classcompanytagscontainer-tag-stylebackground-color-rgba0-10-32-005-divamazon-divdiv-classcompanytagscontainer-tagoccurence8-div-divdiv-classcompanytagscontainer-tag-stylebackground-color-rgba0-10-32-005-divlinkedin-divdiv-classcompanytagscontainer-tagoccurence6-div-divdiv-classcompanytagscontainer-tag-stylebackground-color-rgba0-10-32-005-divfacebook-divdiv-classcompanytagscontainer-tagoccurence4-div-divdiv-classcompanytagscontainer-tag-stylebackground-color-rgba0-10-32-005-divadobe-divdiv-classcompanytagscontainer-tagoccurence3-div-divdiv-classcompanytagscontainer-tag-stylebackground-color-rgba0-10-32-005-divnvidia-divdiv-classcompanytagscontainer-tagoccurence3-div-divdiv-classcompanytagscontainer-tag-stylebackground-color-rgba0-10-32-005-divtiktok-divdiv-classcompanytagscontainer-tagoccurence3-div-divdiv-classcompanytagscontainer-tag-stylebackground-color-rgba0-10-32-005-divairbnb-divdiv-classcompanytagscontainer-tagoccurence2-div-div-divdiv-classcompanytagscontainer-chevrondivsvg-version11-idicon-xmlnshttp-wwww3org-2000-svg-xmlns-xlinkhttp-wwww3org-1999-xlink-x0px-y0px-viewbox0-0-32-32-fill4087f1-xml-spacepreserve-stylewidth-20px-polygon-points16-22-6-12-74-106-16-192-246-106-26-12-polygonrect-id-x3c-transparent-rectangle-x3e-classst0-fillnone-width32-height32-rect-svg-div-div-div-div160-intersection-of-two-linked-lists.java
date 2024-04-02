/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) {
 *         val = x;
 *         next = null;
 *     }
 * }
 */
public class Solution {
    public ListNode getIntersectionNode(ListNode headA, ListNode headB) {
        ListNode f=headA,s=headB;
        int c=0;
        while(f!=s){
            if(c>2) return null;
            if(f.next!=null)   f=f.next;
            else{
                f=headB;
                c+=1;
            }
            if(s.next!=null)    s=s.next;
            else{
                s=headA;
                c+=1;
            }
        }
        return f;
    }
}