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
    ListNode* reverseList(ListNode* head) {
    ListNode* dummy = new ListNode(0);
    ListNode* curr = head;

    while (curr != NULL) {
        ListNode* temp = curr->next;   // save next node

        curr->next = dummy->next;      // insert at front
        dummy->next = curr;

        curr = temp;                   // move forward
    }

    return dummy->next;
}

};
