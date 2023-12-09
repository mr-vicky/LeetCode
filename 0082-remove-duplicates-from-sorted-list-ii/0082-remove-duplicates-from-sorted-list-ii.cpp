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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == NULL) return head;
        map<int, int>mp;
        ListNode* p = head;
        ListNode* q = NULL;
        while(p){
            mp[p -> val]++;
            p = p -> next;
        }
        int unique = 0;
        for(auto x: mp){
            if(x.second == 1)
                unique++;
        }   

        if(unique == 0){
            return q;
        }   
        else{
            p = head;
            for(auto x: mp){
                if(x.second == 1){
                    p -> val = x.first;
                    q = p;
                    p = p -> next;
                }
            }
            if(q != NULL)
                q -> next = NULL;
        }
        return head;
    }
};