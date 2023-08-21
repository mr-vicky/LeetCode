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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode *p, *q, *temp, *address_a, *address_b;
        p=q=list1;
        
        // storing the address of 'a' th Node in 'address_a'
        while(p && a){
            p=p->next;
            a--;
        }
        address_a=p;

        // storing the address of 'b' th Node in 'address_b'
        p=list1;
        while(p && b){
            p=p->next;
            b--;
        }
        address_b=p;

        p=list1;
        while(p){
            if(p == address_b){
                temp=p->next;
                break;
            }
            p=p->next;
        }

        p=list1;
        while(p && q){
            p=p->next;
            if(p == address_a){
                q->next=list2;
                break;
            }
            q=q->next;   
        }

        p=list2;
        while(p->next != NULL){
            p=p->next;
        }
        p->next=temp;

        return list1;
    }
};