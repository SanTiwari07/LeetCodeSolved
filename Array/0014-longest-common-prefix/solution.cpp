class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.size() == 0) return "";

        string answer = "";

        for (int i = 0; i < strs[0].size(); i++) {
            char current = strs[0][i];

            for (int j = 1; j < strs.size(); j++) {
                if (i >= strs[j].size() || strs[j][i] != current) {
                    return answer;
                }
            }
            answer.push_back(current);
        }
        return answer;
    }
};
