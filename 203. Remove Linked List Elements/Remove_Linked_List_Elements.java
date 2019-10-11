/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) { val = x; }
 * }
 */
class Solution {
    public ListNode removeElements(ListNode head, int val) {
        while(head != null && head.val == val) {
            head = head.next;
        }
        if (head == null) return head;
        ListNode front = head.next;
        ListNode back = head;
        
        while(front != null){
            if (front.val == val){
                front = front.next;
                back.next = front;
            }
            else{
                front = front.next;
                back = back.next;
            }
        }
        
        return head;
    }
}