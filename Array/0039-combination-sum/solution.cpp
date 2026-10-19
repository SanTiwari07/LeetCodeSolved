class Solution {
public:
    void printff(int start, vector<vector<int>>& answer, int size,vector<int>& candidates,vector<int>& ds,int target){
        if(target==0){
            answer.push_back(ds);
            return;
        }

        if (start == size) return;

        if(candidates[start] <= target){
            ds.push_back(candidates[start]);
            printff(start,answer,candidates.size(),candidates,ds,target-candidates[start]); 
            ds.pop_back();
        }
        
        printff(start+1,answer,candidates.size(),candidates,ds,target);
        
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>> answer;
        vector<int> ds;
        printff(0,answer,candidates.size(),candidates,ds,target);
        return answer;
    }
};
