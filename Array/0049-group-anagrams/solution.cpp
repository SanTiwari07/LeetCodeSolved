class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
       unordered_map<string,vector<string>>sam;
       for(int a = 0 ; a < strs.size() ; a++){
        string val = strs[a];
        sort(val.begin(),val.end());
        sam[val].push_back(strs[a]);
       }
        vector<vector<string>> answer;
        for(auto it: sam){
            answer.push_back(it.second);
        }
        return answer;

    }
};
