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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode *p, *q;
        int n=0, idx=0;

        p=head;
        while(p){
            n++;
            p=p->next;
        }

        if(n==1){
            delete head;
            return NULL;
        }
        idx=n/2;

        p=head;
        while(p && idx > 0){
            idx--;
            q=p;
            p=p->next;
        }

        q->next=p->next;
        delete p;

        return head;   
    }
};