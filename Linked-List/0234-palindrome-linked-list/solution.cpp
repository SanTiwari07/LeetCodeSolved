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
        ListNode* temp = head;
        deque<int>t1;
        while(temp != NULL){
            t1.push_back(temp -> val);
            temp = temp -> next;
        }
        while(!t1.empty()){
            if(t1.front() == t1.back()){
                t1.pop_back();
                if(!t1.empty())t1.pop_front();
            }else{
                return false;
            }
        }
        return true;
    }
};
