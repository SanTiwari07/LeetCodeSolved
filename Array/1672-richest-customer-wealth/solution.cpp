class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int row = accounts.size();
        int col= accounts[0].size();
        int max = 0;
        for(int a = 0 ; a < row ; a++){
            int count = 0;
            for(int b = 0 ; b < col ; b++){
                count+=accounts[a][b];
            }
            if(count > max){
                max = count;
            }
        }
        return max;
    }
};
