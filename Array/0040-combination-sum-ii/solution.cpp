class Solution {
public:
    void printff(int index, vector<int>& candidates, int size,
                 vector<vector<int>>& answer, vector<int>& ds, int target) {
        
        if(target == 0){
            answer.push_back(ds);
            return;
        }

        for(int i = index; i < size; i++){
            if(i > index && candidates[i] == candidates[i-1])
                continue;   // skip duplicates

            if(candidates[i] > target)
                break;  // pruning

            ds.push_back(candidates[i]);
            printff(i + 1, candidates, size, answer, ds, target - candidates[i]);
            ds.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<vector<int>> answer;
        vector<int> ds;
        printff(0, candidates, candidates.size(), answer, ds, target);
        return answer;
    }
};
