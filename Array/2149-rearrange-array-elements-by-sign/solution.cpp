class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int size = nums.size();
        vector<int>answer(size);
        int n1 = 0, n2 = 1;
        for(int a = 0 ; a < size ; a++){
            if(nums[a]<0){
                answer[n2]=nums[a];
                n2 = n2 + 2;
            }
            if(nums[a]>0){
                answer[n1]=nums[a];
                n1 = n1 + 2;
            }
        }
        return answer;
    }
};
