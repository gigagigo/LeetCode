/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *head= new ListNode(0);
        ListNode *p1 = l1;
        ListNode *p2 = l2;
        ListNode *p=head;
        int upper=0;
        
        while (p1 != NULL || p2 != NULL){
            if (p1 == NULL) p->val = p2->val+upper;
            else if(p2 == NULL) p->val = p1->val+upper;
            else p->val = p1->val+p2->val+upper;
            if (p->val >= 10){upper = 1; p->val -= 10;}
            else upper = 0;    
            if (p1 != NULL) p1 = p1->next;
            if (p2 != NULL) p2 = p2->next;
            if (p1 != NULL || p2 != NULL){
                p->next = new ListNode(0);
                p = p->next;
            }
        }
        
        if (upper) p->next = new ListNode(1);
        
        return head;
    }
};