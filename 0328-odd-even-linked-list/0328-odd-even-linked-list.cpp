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
    ListNode* oddEvenList(ListNode* head) {
        ListNode *p=head;
        if(head==NULL){
        return head;
        }
        int i=0, size=0, idx=0;

        while(p){
            size++;
            p=p->next;
        }
        int arr1[size];
        int arr2[size];

        p=head;
        i=0;
        while(p){
            arr1[i++]=p->val;
            p=p->next;
        }

        int j=0;
        for(int i=0; i<size; i++){
            if(i%2 == 0){
                arr2[j++]=arr1[i];
            }
        }

        for(int i=0; i<size; i++){
            if(i%2 != 0){
                arr2[j++]=arr1[i];
            }
        }

        p=head;
        i=0;
        while(p){
            p->val = arr2[i++];
            p=p->next;
        }

        return head;
    }
};