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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

        if(list1 == NULL) return list2;
        if(list2 == NULL) return list1;

        ListNode *dummy = new ListNode(0);
        ListNode *sanskar = dummy;

        ListNode* temp1 = list1;
        ListNode* temp2 = list2;

        while(temp1 != NULL && temp2 != NULL){
            if(temp1->val >= temp2->val){
                sanskar->next = new ListNode(temp2->val);
                temp2 = temp2->next;
            } else {
                sanskar->next = new ListNode(temp1->val);
                temp1 = temp1->next;
            }
            sanskar = sanskar->next;
        }

        while(temp1 != NULL){
            sanskar->next = new ListNode(temp1->val);
            temp1 = temp1->next;
            sanskar = sanskar->next;
        }

        while(temp2 != NULL){
            sanskar->next = new ListNode(temp2->val);
            temp2 = temp2->next;
            sanskar = sanskar->next;
        }

        return dummy->next;
    }
};
