class Solution {
public:
    void printff(int start, vector<vector<int>>& answer,int size,vector<int>& nums, vector<int>& ds,int target,int k){
        if(target == 0 && ds.size() == k ){
            answer.push_back(ds);
            return;
        }
        if (target < 0 || ds.size() > k) return;
    
            for(int i = start ; i < size ; i++){
            ds.push_back(nums[i]);
            printff(i+1,answer,size,nums,ds,target-nums[i],k);
            ds.pop_back();
            }
    
        
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int>nums={1,2,3,4,5,6,7,8,9};
        vector<vector<int>> answer;
        vector<int>ds;
        printff(0,answer,9,nums,ds,n,k);
        return answer;
    }
};
