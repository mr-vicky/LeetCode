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
    int getGCD(int a, int b){
       int res=((a<b)?a:b);
       while(res>0){
           if(a%res==0 && b%res==0){
               break;
           }
           res--;
       }
       return res;
    }
    
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode *p=head, *q=p->next;
        ListNode *temp, *last;
        while(q!=NULL){
            int res=getGCD(p->val, q->val);
            
            // Creating the new Node
            temp = new ListNode;
            temp->val=res;
            temp->next=NULL;
            p->next=temp;
            temp->next=q;

            p=q;
            q=q->next;
        }
        return head;
    }
};