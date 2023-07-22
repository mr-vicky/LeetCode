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
    void deleteNode(ListNode* node) {
        ListNode *p=node, *q=NULL;
        ListNode *temp=node;
        p=p->next;

        while(p){
            q=node;
            int n=node->val;
            node->val=p->val;
            p->val=n;
            p=p->next;
            node=node->next;
        }
        q->next=NULL;
    }
};