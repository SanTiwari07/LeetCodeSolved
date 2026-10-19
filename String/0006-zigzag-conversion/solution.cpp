class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1 || numRows >= s.size()) return s;
        vector<vector<char>>answer(numRows,vector<char>(s.size(),0));
        int temp = 0;
        int number = 0;
        int dir = 1;
        for(int a = 0 ; a < answer[0].size() ; a++){ //col
            for(int b = 0 ; b < answer.size() ; b++){ //row
            if (b == temp) {
                    answer[b][a] = s[number++];

                    if (temp == numRows - 1) dir = -1;
                    if (temp == 0) dir = 1;

                    temp += dir;
                    break;
                }
            }
        }

        string res = "";
        for(int a = 0 ; a < answer.size() ; a++){
            for(int b = 0 ; b < answer[0].size() ; b++){
                if(answer[a][b] != 0){
                    res += answer[a][b];
                }
            }
        }
        return res;
    }
};
