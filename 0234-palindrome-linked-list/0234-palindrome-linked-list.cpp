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
    bool isPalindrome(ListNode* head) {
        ListNode *p=head;
        vector<int>v1;
        
        while(p){
            v1.push_back(p->val);
            p = p->next;
        }
        vector<int>v2(v1.begin(), v1.end());
        reverse(v2.begin(), v2.end());
        return v1==v2;
    }
};