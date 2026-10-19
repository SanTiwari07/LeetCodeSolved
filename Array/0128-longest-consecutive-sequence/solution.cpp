class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0) return 0;
        sort(nums.begin(),nums.end());
        int maxi = 1;
        int count = 1;
        for(int a = 0 ; a < nums.size()-1 ; a++){
            if(nums[a]+1== nums[a+1]){
                count++;
            }
            else if(nums[a]==nums[a+1]){
                continue;
            }
            else{
                maxi= max(maxi,count);
                count = 1;
            }
        }   
        maxi= max(maxi,count);
        return maxi;
    }
};
