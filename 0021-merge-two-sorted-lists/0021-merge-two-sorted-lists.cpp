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
    ListNode* mergeTwoLists(ListNode* first, ListNode* second) {
        ListNode *third, *last;
        if(first==NULL){
            return second;
        }
        if(second==NULL){
            return first;
        }
        
        if(first->val <= second->val){
            third=first;
            last=first;
            first=first->next;
            last->next=NULL;
        }
        else
        {
            third=second;
            last=second;
            second=second->next;
            last->next=NULL;
        }

        while(first!=NULL && second!=NULL)
        {
            if(first->val < second->val){
                last->next=first;
                last=first;
                first=first->next;
                last->next=NULL;
            }
            else
            {
                last->next=second;
                last=second;
                second=second->next;
                last->next=NULL;
            }
        }
        if(first!=NULL){
            last->next=first;
        }
        else
        {
            last->next=second;
        }

        return third;
    }
};