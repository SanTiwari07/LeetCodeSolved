class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        vector<vector<int>>answer(matrix[0].size(),vector<int>(matrix.size(),0));
        for(int a = 0 ; a < matrix.size() ; a++){
            for(int b = 0 ; b < matrix[0].size() ; b++){
                
                answer[b][a]=matrix[a][b];
            
                
            }
            
        }
        return answer;
    }
};
