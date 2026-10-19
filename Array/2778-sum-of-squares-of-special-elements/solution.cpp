class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int size = nums.size();
        int answer = 0;
        for(int a = 0 ; a < size ; a++){
            if(size%(a+1) == 0) {
                answer+=(nums[a]*nums[a]);
            }
        }   
        return answer;
    }
};
