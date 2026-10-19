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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        unordered_set<int> del(nums.begin(), nums.end());  // store values to delete
        
        // Dummy node to handle head deletions easily
        ListNode dummy(0);
        dummy.next = head;

        ListNode* curr = &dummy;
        while (curr->next) {
            if (del.count(curr->next->val)) {
                curr->next = curr->next->next;  // skip node
            } else {
                curr = curr->next;
            }
        }

        return dummy.next;
    }
};
