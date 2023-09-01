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
    // Method : 1 
    // TC: O(n)
    // SC: O(n)
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode *p = head;
        if(head == NULL) return head;

        vector<int>nums;
        while(p){
            nums.push_back(p->val);
            p = p->next;
        }

        int n = nums.size();
        k = k % n;
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin()+k);
        reverse(nums.begin()+k, nums.end());

        p = head;
        int i = 0;
        while(p && i<n){
            p->val = nums[i];
            p = p->next;
            i++;
        }
        return head;
    }
};