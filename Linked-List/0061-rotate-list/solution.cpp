class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if (!head || !head->next) return head;

        // Find length first
        ListNode* end = head;
        int length = 1;
        while(end->next != NULL){
            end = end->next;
            length++;
        }
        
        // Handle k >= length
        k = k % length;
        if (k == 0) return head;

        ListNode* answer = head;
        ListNode* start = head;
        int count = 0;
        
        // Move answer k steps ahead
        while(count != k){
            answer = answer->next;
            count++;
        }
        
        // Move both pointers until answer reaches end
        while(answer->next != NULL){
            answer = answer->next;
            start = start->next;
        }
        
        // Now start is at the node before the new head
        ListNode* newHead = start->next;
        start->next = NULL;
        answer->next = head;

        return newHead;
    }
};
