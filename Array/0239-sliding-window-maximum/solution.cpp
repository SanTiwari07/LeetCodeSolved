class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> answer;
        deque<int> dq;

        for(int a = 0 ; a < nums.size() ; a++){
            while(!dq.empty() && dq.front() <= a - k){
                dq.pop_front();
            }
            while (!dq.empty() && nums[dq.back()] <= nums[a]) {
                dq.pop_back();
            }
            dq.push_back(a);
            if (a >= k - 1) {
                answer.push_back(nums[dq.front()]);
            }
        }
        
        return answer;
    }
};
