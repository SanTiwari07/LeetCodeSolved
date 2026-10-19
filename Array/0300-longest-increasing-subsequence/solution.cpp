class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        vector<int>lis(n+1,1);
        int maxlen = 1;
        for(int a = 1 ; a < n; a++){
            for(int b = 0 ; b<a ; b++){
                if(nums[a]>nums[b]){
                    lis[a]=max(lis[a],lis[b]+1);
                }
            }
            maxlen = max(maxlen,lis[a]);
        }
        return maxlen;
    }
};
