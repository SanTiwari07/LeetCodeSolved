class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();
        int total = row*col;
        vector<int>answer;
        int a = 0, b = 0;
        int counter1=0,counter2=0;
        
        while(row > a && col > b && answer.size() < total){
            while(b < col && answer.size() < total){
            answer.push_back(matrix[a][b]);
            b++;
        }
        b--; a++;
        while(a < row && answer.size() < total){
            answer.push_back(matrix[a][b]);
            a++;
        }
        a--; b--;
        while(b >= counter2 && answer.size() < total){
            answer.push_back(matrix[a][b]);
            b--;
        }
        b++; a--;
        while(a > counter1 && answer.size() < total){
            answer.push_back(matrix[a][b]);
            a--;
        }
        counter1++;
        counter2++;
        a=counter1;
        b=counter2;
        row--;
        col--;
        }
        return answer;
    }
};
