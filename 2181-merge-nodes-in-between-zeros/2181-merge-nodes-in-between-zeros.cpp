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
    ListNode* mergeNodes(ListNode* head) {
        ListNode *p=head, *q=head->next;
        int sum = 0;
        vector<int>v;

        while(q!=NULL){
            sum+=q->val;

            if(q->val==0){
                v.push_back(sum);
                sum=0;
            }

            p=q;
            q=q->next;
        }
        
        p=head;
        int i=0;
        int n=v.size();
        
        while(i<n){
            p->val=v[i];
            i++;
            q=p;
            p=p->next;
        }
        q->next=NULL;

        return head;
    }
};