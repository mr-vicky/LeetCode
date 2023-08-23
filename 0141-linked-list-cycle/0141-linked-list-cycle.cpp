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
    bool hasCycle(ListNode *head) {
        if(head == NULL || head->next == NULL) return false;
        ListNode *slow, *fast;
        slow = fast = head;
        do{
            slow = slow->next;
            fast = fast->next;
            fast = (fast != NULL)? fast->next : NULL;

        }while( slow && fast && fast != slow);
        return fast==slow;
    }
};