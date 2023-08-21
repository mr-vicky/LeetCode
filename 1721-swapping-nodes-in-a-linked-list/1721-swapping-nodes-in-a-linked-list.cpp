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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode *p, *q;
        p=q=head;
        
        int size=0;
        while(p){
            size++;
            p=p->next;
        }

        p=head;
        int a = k-1;
        while( p && a--){
            p=p->next;
        }

        int b = size-k;
        while( q && b--){
            q=q->next;
        }
        
        swap(p->val, q->val);

        return head;
    }
};