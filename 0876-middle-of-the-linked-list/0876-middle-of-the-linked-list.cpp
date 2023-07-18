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
    ListNode* middleNode(ListNode* head) {
        ListNode *p=head;
        int n=0;
        while(p!=NULL){
            n++;
            p=p->next;
        }

        int mid=(n/2);
        p=head;

        while(mid--){
            p=p->next;
        }
        
        return p;
    }
};