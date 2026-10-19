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
    ListNode* swapPairs(ListNode* head) {
        if (!head || !head->next) return head;

        ListNode dummy(0);
        dummy.next = head;
        ListNode* prev = &dummy;
        ListNode* temp = head;
        int count = 0;

        while (temp != NULL) {
            count++;
            if (count % 2 == 0) {

                ListNode* first = prev->next;
                ListNode* second = temp;

                first->next = second->next;
                second->next = first;
                prev->next = second;

                prev = first;
                temp = first->next;
            } else {
                temp = temp->next;
            }
        }

        return dummy.next;
    }
};
