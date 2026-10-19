class Solution {
public:
    void printfff(int start, vector<vector<int>>& answer, int size, vector<int>& nums,vector<int>& ds){
        if(start == size){
            answer.push_back(ds);
            return;
        }
        ds.push_back(nums[start]);
        printfff(start+1,answer,size,nums,ds);
        ds.pop_back();

        while(start+1 < size && nums[start]==nums[start+1]){
            start++;
        }

        printfff(start+1,answer,size,nums,ds);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> answer;
        vector<int>ds;
        printfff(0,answer,nums.size(),nums,ds);
        return answer;

    }
};
