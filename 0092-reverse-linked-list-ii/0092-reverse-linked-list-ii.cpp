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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* p, *start, *end;
        if(left == right) return head;
        p = head;
        start = end = NULL;
        int pos = 1;

        while(p){
            if(pos == left)
                start = p;
            if(pos == right){
                end = p;
                break;
            }
            pos++;
            p = p -> next;
        }
        
        vector<int>nums;
        p = start;
        while(p != end){
            nums.push_back(p -> val);
            p = p -> next;
        }
        nums.push_back(end -> val);
        reverse(nums.begin(), nums.end());

        p = start;
        int i = 0;
        end -> val = start -> val;
        while(p != end){
            p -> val = nums[i++];
            p = p -> next;
        }
        return head;
    }
};