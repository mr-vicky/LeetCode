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
    ListNode* swapPairs(ListNode* head) {
        ListNode *p, *q, *r = NULL;
        q = head;
        if(q == NULL || q -> next == NULL) return head;
        p = head -> next;
        head = p;

        while(q -> next != NULL){
            if(r != NULL) r -> next = p;
            q -> next = p -> next;
            p -> next = q;

            r = q;
            if(q -> next != NULL) q = q -> next;
            if(q -> next != NULL) p = q -> next;
        }  
        return head;
    }
};