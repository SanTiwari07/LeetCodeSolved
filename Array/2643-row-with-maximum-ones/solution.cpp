class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        vector<int>answer;
        for(int a = 0 ; a < mat.size() ; a++){
            int sample = 0;
            for(int b = 0 ; b <mat[0].size() ; b++){
                sample+=mat[a][b];
            }
            answer.push_back(sample);
        }
        auto ptr = max_element(answer.begin(), answer.end());

        // pointer subtraction to find index
        int index = ptr - answer.begin();

        return {index, *ptr};

    }
};
