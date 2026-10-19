class Solution {
public:
    void printfff(int start,vector<vector<int>>& answer,int size,vector<int>& nums, vector<int>& ds){
        if(start == size){
            answer.push_back(ds);
            return;
        }
        ds.push_back(nums[start]);
        printfff(start+1,answer,size,nums,ds);
        ds.pop_back();
        printfff(start+1,answer,size,nums,ds);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> answer;
        vector<int> ds;
        printfff(0,answer,nums.size(),nums,ds);

        return answer;
    }
};
