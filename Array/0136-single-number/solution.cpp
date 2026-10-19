class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int answer = 0;
       for(int a = 0 ; a < nums.size() ; a++){
        answer^=nums[a];
       } 
       return answer;
    }
};
